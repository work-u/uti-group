
//Filtrage Documents financiers
jQuery('a.annee-doc').click(function(){
     var valAnnees = $(this).html();
     jQuery(".tr-annee").hide();
     jQuery("."+valAnnees).show();
     return false;
 });
