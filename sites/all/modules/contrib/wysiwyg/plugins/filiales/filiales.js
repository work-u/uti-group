(function ($) {
// @todo Array syntax required; 'break' is a predefined token in JavaScript.
Drupal.wysiwyg.plugins['filiales'] = {

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
      if (data.content.match(/<!--filiales-->/)) {
        return;
      }
      var content = '<!--filiales-->';
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
     Desc += '<tbody><tr><td class="w40">UTiGROUP.</td><td class="w20">-2 623</td><td class="w20">-5 397</td><td class="w20">1 757</td></tr>';
     Desc += '<tr><td class="w40">UTiGROUP. Est</td><td class="w20">239</td><td class="w20">188</td><td class="w20">295</td></tr>';
     Desc += '<tr><td class="w40">UTiGROUP. Luxembourg</td><td class="w20">-12</td><td class="w20">-10</td><td class="w20">5</td></tr>';
     Desc += '<tr><td class="w40">UTiGROUP. Rhône-Alpes</td><td class="w20">-124</td><td class="w20">107</td><td class="w20">-151</td></tr>';
     Desc += '<tr><td class="w40">HBCC Partners</td><td class="w20">0</td><td class="w20">0</td><td class="w20">-59</td></tr>';     
     Desc += '<tr class="bold"><td class="w40">TOTAL</td><td class="w20">-2 520</td><td class="w20">-5 112</td><td class="w20">1 847</td></tr>';
     Desc += '</tbody></table></div>';  
     
      return Desc;  
   
  }
};

})(jQuery);
s