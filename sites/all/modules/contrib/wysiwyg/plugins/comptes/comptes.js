(function ($) {
// @todo Array syntax required; 'break' is a predefined token in JavaScript.
Drupal.wysiwyg.plugins['comptes'] = {

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
      if (data.content.match(/<!--comptes-->/)) {
        return;
      }
      var content = '<!--comptes-->';
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
     Desc += '<div class="block-7"><table><thead><tr><th class="w40">En K€ - Normes IFRS</th> <th class="w20">31-dec-12</th><th class="w20">31-dec-11</th><th class="w20">31-dec-10</th></tr></thead>';
     Desc += '<tbody><tr><td class="w40">Chiffre d\'affaires</td><td class="w20">27 904</td><td class="w20">28 457</td><td class="w20">28 581</td></tr>';
     Desc += '<tr><td class="w40">Résultat opérationnel courant</td><td class="w20">481</td><td class="w20">745</td><td class="w20">1 574</td></tr>';
     Desc += '<tr><td class="w40">Résultat opérationnel</td><td class="w20">-1 928</td><td class="w20">-2 789</td><td class="w20">3 441</td></tr>';
     Desc += '<tr><td class="w40">Coût de l\'endettement financier</td><td class="w20">-190</td><td class="w20">-213</td><td class="w20">-215</td></tr>';
     Desc += '<tr><td class="w40">Résultat avant impôts des activités ordinaires</td><td class="w20">-2 167</td><td class="w20">-3 007</td><td class="w20">3 232</td></tr>';
     Desc += '<tr><td class="w40">Résultat global</td><td class="w20">-2 520</td><td class="w20">-5 112</td><td class="w20">1 847</td></tr>';
     Desc += '<tr><td class="w40">Intérêts minoritaires</td><td class="w20">0</td><td class="w20">0</td><td class="w20">0</td></tr>';
     Desc += '<tr class="bold"><td class="w40">Résultat net de l\'exercice</td><td class="w20">-2 520</td><td class="w20">-5 112</td><td class="w20">1 847</td></tr>';
     Desc += '</tbody></table></div>';  
     
      return Desc;  
   
  }
};

})(jQuery);
s