(function ($) {
// @todo Array syntax required; 'break' is a predefined token in JavaScript.
Drupal.wysiwyg.plugins['evenements'] = {

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
      if (data.content.match(/<!--evenements-->/)) {
        return;
      }
      var content = '<!--evenements-->';
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
     Desc += '<div class="block-7"><h2 class="titre">A venir</h2>'
     Desc += '<table><thead><tr><th class="w30">Date</th><th class="w70">Titre</th></tr></thead>';
     Desc += '<tbody>';
     Desc += '<tr class="bold"><td class="w20">15-Nov-2013 </td><td class="w80">Chiffre d’affaires du 3ème trimestre 2013</td></tr>';
     Desc += '<tr> <td class="w20">30-Aou-2013 </td><td class="w80">Rapport financier semestriel au 30/06/2013</td></tr>';
     Desc += '<tr> <td class="w20">31-Jui-2013 </td><td class="w80">Comptes consolidés au 30 juin 2013</td></tr>';
     Desc += '<tr> <td class="w20">31-Jui-2013 </td><td class="w80">Chiffre d\'affaires du 1er semestre 2013</td></tr>';
     Desc += '<tr> <td class="w20">22-Mai-2013 </td><td class="w80">Assemblée générale ordinaire annuelle</td></tr>';
     Desc += '<tr> <td class="w20">15-Mai2013 </td><td class="w80">Chiffre d\'affaires du premier trimestre 2013</td></tr>';
     Desc += '<tr> <td class="w20">30-Avr2013 </td><td class="w80">Rapport Financier annuel au 31/12/2012</td></tr>';
     Desc += '<tr> <td class="w20">29-Mar-2013 </td><td class="w80">Communiqué de presse sur les résultats 2012</td></tr>';
     Desc += '<tr> <td class="w20">15-Nov-2012 </td><td class="w80">Chiffre d\'affaires du 3ème trimestre 2012</td></tr>';
     Desc += '<tr> <td class="w20">31-Aou-2012 </td><td class="w80">Rapport financier semestriel au 30/06/2012</td></tr>';
     Desc += '</tbody></table></div>';
     
      return Desc;  
   
  }
};

})(jQuery);
s