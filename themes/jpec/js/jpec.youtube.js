/**
 * @file
 * Custom scripts for theme.
 */

// load the IFrame Player API code asynchronously.

//     var tag = document.createElement('script');
//     tag.src = "https://www.youtube.com/iframe_api";
//     var firstScriptTag = document.getElementsByTagName('script')[0];
//     firstScriptTag.parentNode.insertBefore(tag, firstScriptTag);

// var player = null;   

// // create YouTube Player
// function onYouTubeIframeAPIReady() {

//   player = new YT.Player('player', {
//     width: '100%',
//     height: '100%',
//     //videoId: 'zVbBL9Aw3v0',
//     playerVars: {
//       'enablejsapi': 1,
//       'origin': document.origin,
//       'rel': 0,
//       wmode: "opaque",
//       'controls': 0
//     },
//     events: {
//       'onReady': onPlayerReady
//     },
//   });
// }

// function onPlayerReady(event) {
//   //console.log('player ready');
// }

// (function ($) {

//   Drupal.behaviors.youtubeOverlay = {
//     attach: function (context, settings) {

//       var background_video = document.getElementById('headervid');
//       var youtube_id = $('.video-launcher').attr('data-theVideo');

//       $("#video_modal").on('shown.bs.modal', function() {
        
//         if(typeof player.playVideo == 'function') {
//           player.loadVideoById(youtube_id);
//           //player.loadVideoById('zVbBL9Aw3v0');
//           player.playVideo();
//           // pause the background video while the overlay video is playing
//           background_video.pause();
//         } 
//         else {
//           var fn = function(){
//             player.playVideo();
//           };
//           setTimeout(fn, 200);
//         }
//       });
//       $("#video_modal").on('hidden.bs.modal', function() {
//         player.stopVideo();
//         // start backgournd video again
//         background_video.play();
//       });
//     }
//   };
// })(jQuery);
