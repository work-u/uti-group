(function ($) {
// @todo Array syntax required; 'break' is a predefined token in JavaScript.
Drupal.wysiwyg.plugins['chiffre'] = {

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
      if (data.content.match(/<!--chiffre-->/)) {
        return;
      }
      var content = '<!--chiffre-->';
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
     Desc += '<div class="block-7"><h2 class="titre">Chiffre d’affaires trimestriel UTiGROUP.</h2>'
     Desc += '<table><thead><tr><th class="w40">En millions d\'€uros</th> <th class="w20">2012</th><th class="w20">2011</th><th class="w20">Variation</th></tr></thead>';
     Desc += '<tbody>';
     Desc += '<tr><td class="w40">Chiffre d\'affaires 1er trimestre</td><td class="w20">6,37</td><td class="w20">5,95</td><td class="w20">7,1 %</td></tr>';
     Desc += '<tr><td class="w40">Chiffre d\'affaires 2ème trimestre</td><td class="w20">5,74</td><td class="w20">5,81</td><td class="w20">-1,2 %</td></tr>';
     Desc += '<tr><td class="w40">Chiffre d\'affaires 3ème trimestre</td><td class="w20">5,41</td><td class="w20">5,73</td><td class="w20">-5,6 %</td></tr>';
     Desc += '<tr><td class="w40">Chiffre d\'affaires 4ème trimestre</td><td class="w20">6,00</td><td class="w20">6,13</td><td class="w20">-2,1 %</td></tr>';
     Desc += '<tr class="bold"><td class="w40">TOTAL année</td><td class="w20">23,52</td><td class="w20">23,62</td><td class="w20">-0,4 %</td></tr>';
     Desc += '<tr><td class="w40">Premier semestre</td><td class="w20">12,11</td><td class="w20">11,76</td><td class="w20">3,0 %</td></tr>';
     Desc += '<tr><td class="w40">Deuxième semestre</td><td class="w20">11,41</td><td class="w20">11,86</td><td class="w20">-3,8 %</td></tr>';
     Desc += '</tbody></table></div>';  
     
     Desc += '<div class="block-7"><h2 class="titre">Chiffre d’affaires trimestriel consolidé</h2>'
     Desc += '<table><thead><tr><th class="w40">En millions d\'€uros</th> <th class="w20">2012</th><th class="w20">2011</th><th class="w20">Variation</th></tr></thead>';
     Desc += '<tbody>';
     Desc += '<tr><td class="w40">Chiffre d\'affaires 1er trimestre</td><td class="w20">7,71</td><td class="w20">7,38</td><td class="w20">4,3 %</td></tr>';
     Desc += '<tr><td class="w40">Chiffre d\'affaires 2ème trimestre</td><td class="w20">6,90</td><td class="w20">7,05</td><td class="w20">-2,1 %</td></tr>';
     Desc += '<tr><td class="w40">Chiffre d\'affaires 3ème trimestre</td><td class="w20">6,45</td><td class="w20">6,89</td><td class="w20">-6,4 %</td></tr>';
     Desc += '<tr><td class="w40">Chiffre d\'affaires 4ème trimestre</td><td class="w20">6,84</td><td class="w20">7,14</td><td class="w20">-4,2 %</td></tr>';
     Desc += '<tr class="bold"><td class="w40">TOTAL année</td><td class="w20">27,90</td><td class="w20">28,46</td><td class="w20">-2,0 %</td></tr>';
     Desc += '<tr><td class="w40">Premier semestre</td><td class="w20">14,61</td><td class="w20">14,43</td><td class="w20">1,2 %</td></tr>';
     Desc += '<tr><td class="w40">Deuxième semestre</td><td class="w20">13,29</td><td class="w20">14,03</td><td class="w20">-5,3 %</td></tr>';
     Desc += '</tbody></table></div>';  
     
      return Desc;  
   
  }
};

})(jQuery);
s