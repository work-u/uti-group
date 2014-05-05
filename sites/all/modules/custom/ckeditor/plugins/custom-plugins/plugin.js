CKEDITOR.plugins.add('custom-plugins',
{
    init: function(editor)
    {
        editor.ui.addButton('modTextSlide',
                {
                    label: "Bloc text slide",
                    icon: this.path + 'mod-text-slide.png',
                    command: 'modtextslide'
                });

        editor.addCommand('modtextslide',
                {
                    exec: function()
                    {
                        insertDiv('modtextslide');
                    }
                });

        function insertDiv(mode)
        {

            switch (mode)
            {
                case 'modtextslide':
                    var html =
                        '<ul class="mod-text-slide">' +
                          '<li>' +
                            '<h3 class="sprite sprite-fleche-down">Le parcours de l\'adoption est souvent long et difficile</h3>' +
                            '<ul class="mod-text-slide-body">' +
                              '<li>' +
                                '<p>Il existe des conventions internationales relatives à l\'adoption entre la France et certains pays. Des organismes autorisés peuvent vous aider dans vos démarches. Les procédures varient selon le pays d\'origine de l\'enfant à adopter. Vous pouvez obtenir des informations auprès du service des affaires européennes internationales du ministère de la justice.</p>' +
                                '<p>Le parcours de l\'adoption est souvent long et difficile. N­\'hésitez pas à rencontrer votre notaire au sujet de ces différentes manières d\'adopter. Il vous en expliquera les conséquences juridiques et fiscales.</p>' +
                              '</li>' +
                            '</ul>' +
                          '</li>' +
                        '</ul>';

                    break;

                default:
                    var html =
                            '';
            }


            var element = CKEDITOR.dom.element.createFromHtml(html);
            editor.insertElement(element);

            var p_vide = CKEDITOR.dom.element.createFromHtml('<p>&nbsp;</p>');
            editor.insertElement(p_vide);

        }

    }
});
