(function ($) {
// @todo Array syntax required; 'break' is a predefined token in JavaScript.
Drupal.wysiwyg.plugins['assemblees'] = {

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
      if (data.content.match(/<!--assemblees-->/)) {
        return;
      }
      var content = '<!--assemblees-->';
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
     Desc += '<div class="block-7"><h2 class="titre">Assemblée Générale du 22/05/2013</h2>'
     Desc += '<table><thead><tr><th class="w80">Titre</th><th class="w20">Documents</th></tr></thead>';
     Desc += '<tbody>';
     Desc += '<tr><td class="w80">DOCUMENTS PRÉVUS À L’ARTICLE 225-81 DU CODE DU COMMERCE</td><td><a class="picto-pdf" href="#">PDF</a></td></tr>';
     Desc += '<tr><td class="w80">DOCUMENTS PRÉVUS À L’ARTICLE 225-81 DU CODE DU COMMERCE</td><td><a class="picto-pdf" href="#">PDF</a></td></tr>';
     Desc += '<tr><td class="w80">DÉCLARATION DU NOMBRE TOTAL DE DROITS DE VOTE AU 17/04/2013</td><td><a class="picto-pdf" href="#">PDF</a></td></tr>';
     Desc += '<tr><td class="w80">AVIS DE RÉUNION PUBLIÉ AU BALO DU 17/04/2013</td><td><a class="picto-pdf" href="#">PDF</a></td></tr>';
     Desc += '<tr><td class="w80">RAPPORT DES COMMISSAIRES AUX COMPTES SUR LES COMPTES ANNUELS 2012</td><td><a class="picto-pdf" href="#">PDF</a></td></tr>';
     Desc += '<tr><td class="w80">RAPPORT DES COMMISSAIRES AUX COMPTES SUR LES COMPTES CONSOLIDÉS 2012</td><td><a class="picto-pdf" href="#">PDF</a></td></tr>';
     Desc += '<tr><td class="w80">RAPPORT SPÉCIAL DES COMMISSAIRES AUX COMPTES 2012</td><td><a class="picto-pdf" href="#">PDF</a></td></tr>';
     Desc += '<tr><td class="w80">RAPPORT DES COMMISSAIRES AUX COMPTES SUR LE RAPPORT DU PRÉSIDENT 2012</td><td><a class="picto-pdf" href="#">PDF</a></td></tr>';
     Desc += '<tr><td class="w80">RAPPORT DE GESTION 2012</td><td><a class="picto-pdf" href="#">PDF</a></td></tr>';
     Desc += '</tbody></table></div>';
     
      return Desc;  
   
  }
};

})(jQuery);
s