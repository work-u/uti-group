(function ($) {
var path = 'http://localhost/uti-group-anis';
// @todo Array syntax required; 'break' is a predefined token in JavaScript.
Drupal.wysiwyg.plugins['actionnariat'] = {

  /**
   * Execute the button.
   */
  invoke: function(data, settings, instanceId) {
    if (data.format == 'html') {
      // Prevent duplicating a teaser break.
      if ($(data.node).is('img.wysiwyg-break')) {
        return;
      }
      var content = this._getPlaceholder(settings);
    }else{
      // Prevent duplicating a teaser break.
      // @todo data.content is the selection only; needs access to complete content.
      if (data.content.match(/<!--actionnariat-->/)) {
        return;
      }
      var content = '<!--actionnariat-->';
    }
    if (typeof content != 'undefined') {
      Drupal.wysiwyg.instances[instanceId].insert(content);
    }
  },

  
  /**
   * Helper function to return a HTML placeholder.
   */
  _getPlaceholder: function (settings) {
     var Desc =""; 
     Desc += '<div class="clearfix block-5"><img src="'+path+'/sites/default/files/kcfinder/images/actionnariat.jpg"></div>';
     Desc += '<div class="block-7"><table><thead><tr><th class="w33">Actionnaires</th> <th class="w33">Nombre d’actions</th><th class="w33">% capital</th></tr></thead>';
     Desc += '<tbody><tr><td class="w33">Law Informatique</td><td class="w33">4 707 069</td><td class="w33">54,4 %</td></tr>';
     Desc += '<tr><td class="w33">Public</td><td class="w33">3 490 695</td><td class="w33">40,3 %</td></tr>';
     Desc += '<tr><td class="w33">Autocontrôle</td><td class="w33">3 490 695</td><td class="w33">40,3 %</td></tr>';
     Desc += '</tbody><tfoot><tr><td class="w33">TOTAL actions</td><td class="w33">8 658 736</td><td class="w33">100,0 %</td></tr></tfoot></table>';
     Desc += '<p><b>Nombre total de droits de vote : 12 851 662</b></p></div>';  
     
      return Desc;  
   
  }
};

})(jQuery);
