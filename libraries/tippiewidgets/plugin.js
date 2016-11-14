// Inspired by http://ckeditor.com/addon/widgettemplatemenu
CKEDITOR.plugins.add( 'tippiewidgets', {
    requires: 'menubutton,table',

    defaults : {
        name: 'accordion',
        count: 3,
        activePanel: 1,
        multiExpand: false
    },

    init: function( editor ) {
        // Set the default button info based on installed plugins
        var buttonData = {};
        // @todo: make these if statement work
        if (editor.plugins.layoutmanager != undefined) {
            buttonData.addlayout = 'Insert Layout';
        }

        if (editor.plugins.table != undefined) {
            buttonData.table = 'Insert Tabular Data';
        }

        // Get the enabled menu items from editor.config
        if (editor.config.tippiewidgetmenuButtons != undefined) {
            var config = editor.config.tippiewidgetmenuButtons.split(',');
            var buttons = {};
            for (var i = 0; i < config.length; i++) {
                buttons[config[i]] = buttonData[config[i]];
            }
        }
        else {
            var buttons = buttonData;
        }

        // Build the list of menu items
        var items =  {};
        for(var key in buttons) {
            items[key] = {
                label: buttons[key],
                command: key,
                group: 'tippiewidgetmenu',
                icon: key
            }
        }
        // Items must belong to a group.
        editor.addMenuGroup( 'tippiewidgetmenu' );
        editor.addMenuItems( items );

        editor.ui.add( 'TippieWidgetMenu', CKEDITOR.UI_MENUBUTTON, {
            label: 'Insert Widget',
            icon: this.path + 'icons/tippiewidgetmenu.png' ,
            onMenu: function() {
                // You can control the state of your commands live, every time
                // the menu is opened.
                return {
                    addlayout: editor.commands.addlayout == undefined ? false : editor.commands.addlayout.state,
                    table: editor.commands.table == undefined ? false : editor.commands.table.state
                };
            }
        } );

    }


} );
