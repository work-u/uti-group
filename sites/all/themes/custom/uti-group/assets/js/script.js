function initModTextSlide() {
    $('.mod-text-slide > li h3').unbind('click');
    $('.mod-text-slide > li h3').bind('click', function() {
        $(this).parents('.mod-text-slide').toggleClass('show');
    });
}
function initBoxAdressResultSearchMap() {
    var h = $('.skbody-mobile .mod-result-search.carte .box-result:eq(0)').height(),
            nbr = $('.skbody-mobile .mod-result-search.carte .box-result').length;
    $('.skbody-mobile .mod-result-search.carte .box-result').each(function() {
        if ($(this).height() > h)
            h = $(this).height();
    });
    $('.skbody-mobile .mod-result-search.carte .body-result-search .box-adress-wrap').css('width', parseInt((262 * nbr) + 2) + 'px');

    $('.skbody-mobile .mod-result-search.carte .box-result').height(h);
    $('.skbody-mobile .mod-result-search.carte .box-result').css({
        'float': 'left',
        'width': '250px'
    });
}
var g = {
    version: '1.1.2',
    date: '2014.jun.06',
    debug: false,
    consolelog: {
        css: 'background: #FFF; color: #008ce1'
    },
    uFontSize: "em",
    defaultSize: 1, // Taille de caractères
    idBackTop: "#back-top",
    idPage: "#page",
    originalState: '',
    nav: {
        animationSpeedItems: 'slow',
        classOpen: 'open',
        classShow: 'show',
        classActive: 'active',
        offsetSkBody: 30
    },
    classSuperBody: {
        mobile: 'is-mobile',
        descktop: 'is-descktop',
        pushed: 'mp-pushed'
    },
    eventtype: {
        mobile: 'touchstart',
        descktop: 'hover',
        init: function() {
            g.log('Init Eventtype');
            var classSuperBody = g.mobilecheck() ? g.classSuperBody.mobile : g.classSuperBody.descktop,
                    eventtype = g.mobilecheck() ? g.eventtype.mobile : g.eventtype.descktop;
            $('body').addClass(eventtype);
            g.log('\tEventtype body add class : ' + classSuperBody);
            g.log('\tEventtype : ' + eventtype);
        }
    },
    clas: {
        js: {
            hidden: '.hidden-with-js',
            display: '.display-with-js',
            absolute: '.absolute-with-js'
        },
        css: {
            hidden: 'display-none',
            display: 'display-block',
            absolute: 'position-absolute'
        }
    },
    globalParamsMob: {
        defaultWidth: 1170,
        defaultMaxWidth: 1170,
        defaultMinWidth: 500,
        resolutionIpad: 1024,
        resolutionMobile: 640,
        offsetLeftNavTabUniter: 'px',
        offsetLeftNavTab: 323,
        offsetLeftNavTabNegative: 1,
        durationAnimation: 'fast',
        browserClass: {
            ipad: 'ipad',
            iphone: 'iphone',
            android: 'android',
            orientation: {
                landscape: 'landscape',
                portrait: 'portrait'
            },
            modes: {
                mobile: 'mobile',
                tablet: 'tablet',
                desktops: 'desktops'
            }
        }
    },
    log: function(msg) {
        if (this.debug && !$.browser.msie)
            console.log('%c LOG : ', this.consolelog.css, msg);
    },
    mobilecheck: function() {
        var check = false;
        (function(a) {
            if (/(android|ipad|playbook|silk|bb\d+|meego).+mobile|avantgo|bada\/|blackberry|blazer|compal|elaine|fennec|hiptop|iemobile|ip(hone|od)|iris|kindle|lge |maemo|midp|mmp|netfront|opera m(ob|in)i|palm( os)?|phone|p(ixi|re)\/|plucker|pocket|psp|series(4|6)0|symbian|treo|up\.(browser|link)|vodafone|wap|windows (ce|phone)|xda|xiino/i.test(a) || /1207|6310|6590|3gso|4thp|50[1-6]i|770s|802s|a wa|abac|ac(er|oo|s\-)|ai(ko|rn)|al(av|ca|co)|amoi|an(ex|ny|yw)|aptu|ar(ch|go)|as(te|us)|attw|au(di|\-m|r |s )|avan|be(ck|ll|nq)|bi(lb|rd)|bl(ac|az)|br(e|v)w|bumb|bw\-(n|u)|c55\/|capi|ccwa|cdm\-|cell|chtm|cldc|cmd\-|co(mp|nd)|craw|da(it|ll|ng)|dbte|dc\-s|devi|dica|dmob|do(c|p)o|ds(12|\-d)|el(49|ai)|em(l2|ul)|er(ic|k0)|esl8|ez([4-7]0|os|wa|ze)|fetc|fly(\-|_)|g1 u|g560|gene|gf\-5|g\-mo|go(\.w|od)|gr(ad|un)|haie|hcit|hd\-(m|p|t)|hei\-|hi(pt|ta)|hp( i|ip)|hs\-c|ht(c(\-| |_|a|g|p|s|t)|tp)|hu(aw|tc)|i\-(20|go|ma)|i230|iac( |\-|\/)|ibro|idea|ig01|ikom|im1k|inno|ipaq|iris|ja(t|v)a|jbro|jemu|jigs|kddi|keji|kgt( |\/)|klon|kpt |kwc\-|kyo(c|k)|le(no|xi)|lg( g|\/(k|l|u)|50|54|\-[a-w])|libw|lynx|m1\-w|m3ga|m50\/|ma(te|ui|xo)|mc(01|21|ca)|m\-cr|me(rc|ri)|mi(o8|oa|ts)|mmef|mo(01|02|bi|de|do|t(\-| |o|v)|zz)|mt(50|p1|v )|mwbp|mywa|n10[0-2]|n20[2-3]|n30(0|2)|n50(0|2|5)|n7(0(0|1)|10)|ne((c|m)\-|on|tf|wf|wg|wt)|nok(6|i)|nzph|o2im|op(ti|wv)|oran|owg1|p800|pan(a|d|t)|pdxg|pg(13|\-([1-8]|c))|phil|pire|pl(ay|uc)|pn\-2|po(ck|rt|se)|prox|psio|pt\-g|qa\-a|qc(07|12|21|32|60|\-[2-7]|i\-)|qtek|r380|r600|raks|rim9|ro(ve|zo)|s55\/|sa(ge|ma|mm|ms|ny|va)|sc(01|h\-|oo|p\-)|sdk\/|se(c(\-|0|1)|47|mc|nd|ri)|sgh\-|shar|sie(\-|m)|sk\-0|sl(45|id)|sm(al|ar|b3|it|t5)|so(ft|ny)|sp(01|h\-|v\-|v )|sy(01|mb)|t2(18|50)|t6(00|10|18)|ta(gt|lk)|tcl\-|tdg\-|tel(i|m)|tim\-|t\-mo|to(pl|sh)|ts(70|m\-|m3|m5)|tx\-9|up(\.b|g1|si)|utst|v400|v750|veri|vi(rg|te)|vk(40|5[0-3]|\-v)|vm40|voda|vulc|vx(52|53|60|61|70|80|81|83|85|98)|w3c(\-| )|webc|whit|wi(g |nc|nw)|wmlb|wonu|x700|yas\-|your|zeto|zte\-/i.test(a.substr(0, 4)))
                check = true;
        })(navigator.userAgent || navigator.vendor || window.opera);
        return check;
    },
    breakpoint: {
        skheader: {
            mobile: {
                w: 688,
                c: 'skheader-mobile'
            },
            tablet: {
                w: 1170,
                c: 'skheader-tablet'
            },
            desktops: {
                w: 1170,
                c: 'skheader-desktops'
            },
            init: function() {
                g.log('Call Init breakpoint for header');
                $(document).ready(function() {
                    g.log('#Document Reade# Init breakpoint for header');
                    skheaderResetClass(true);
                    $(window).resize(function() {
                        var ww = $(window).width();
                        skheaderResetClass(false);
                    });
                });

                function skheaderResetClass(bclone) {
                    var ww = $(window).width();
                    if (ww <= g.breakpoint.skheader.mobile.w) {
                        skheaderRemoveAddClass(g.breakpoint.skheader.mobile.c);
                        $('#header-mega-menu').megamenu(bclone, g.breakpoint.skheader.mobile.c);
                    } else {
                        if (ww <= g.breakpoint.skheader.tablet.w) {
                            skheaderRemoveAddClass(g.breakpoint.skheader.tablet.c);
                            $('#header-mega-menu').megamenu(bclone, g.breakpoint.skheader.tablet.c);
                        } else {
                            skheaderRemoveAddClass(g.breakpoint.skheader.desktops.c);
                            $('#header-mega-menu').megamenu(bclone, g.breakpoint.skheader.desktops.c);
                        }
                    }
                };

                function skheaderRemoveAddClass(c) {
                    if (!$('body').hasClass(c)) {
                        $('body').removeClass(g.breakpoint.skheader.mobile.c + ' ' + g.breakpoint.skheader.tablet.c + ' ' + g.breakpoint.skheader.desktops.c).addClass(c);
                        g.log('\tBreakpoint MegaNav class : ' + c);
                    }
                }
            }
        },
        skbody: {
            mobile: {
                w: 460,
                c: 'skbody-mobile'
            },
            tablet: {
                portrait: {
                    w: 768,
                    c: 'skbody-tablet',
                    o: 'portrait'
                },
                landscape: {
                    w: 1024,
                    c: 'skbody-tablet',
                    o: 'landscape'
                }
            },
            desktops: {
                w: 1024,
                c: 'skbody-desktops'
            },
            init: function() {
                g.log('Call Init breakpoint for Body');
                $(document).ready(function() {
                    g.log('#Document Reade# Init breakpoint for Body');
                    skbodyResetClass();
                    $(window).resize(function() {
                        var ww = $(window).width();
                        skbodyResetClass();
                        g.log(' Window width = ' + ww);
                    });
                });

                function skbodyResetClass() {
                    var ww = $(window).width();
                    if (ww <= g.breakpoint.skbody.mobile.w) {
                        skbodyRemoveAddClass(g.breakpoint.skbody.mobile.c);
                        initMobile();
                    } else {
                        if (ww <= g.breakpoint.skbody.tablet.portrait.w) {
                            skbodyRemoveAddClass(g.breakpoint.skbody.tablet.portrait.c + ' ' + g.breakpoint.skbody.tablet.portrait.o);
                            initTablet();
                            initTabletPortrait();
                        } else {
                            if (ww <= g.breakpoint.skbody.tablet.landscape.w) {
                                skbodyRemoveAddClass(g.breakpoint.skbody.tablet.landscape.c + ' ' + g.breakpoint.skbody.tablet.landscape.o);
                                initTablet();
                                initTabletLandscape();
                            } else {
                                skbodyRemoveAddClass(g.breakpoint.skbody.desktops.c);
                                initDesctop();
                            }
                        }
                    }
                    return true;
                }
                ;

                function skbodyRemoveAddClass(c) {
                    if (!$('body').hasClass(c)) {
                        $('body').removeClass(g.breakpoint.skbody.mobile.c + ' ' + g.breakpoint.skbody.tablet.portrait.c + ' ' + g.breakpoint.skbody.tablet.landscape.c + ' ' + g.breakpoint.skbody.tablet.portrait.o + ' ' + g.breakpoint.skbody.tablet.landscape.o + ' ' + g.breakpoint.skbody.desktops.c).addClass(c);
                        g.log('\tBreakpoint MegaNav class : ' + c);
                    }
                    return true;
                }
                ;

                function initMobile() {
                    initModTextSlide();
                    initBoxAdressResultSearchMap();
                    return true;
                }
                ;

                function initTablet() {
                    $('.skheader-desktops li').hover(function() {
                        return false;
                    })


                    return true;
                }
                ;

                function initTabletPortrait() {
                    initModTextSlide();
                    return true;
                }
                ;

                function initTabletLandscape() {
                    return true;
                }
                ;

                function initDesctop() {
                    return true;
                }
                ;
            }
        },
        init: function() {
            g.breakpoint.skheader.init();
            g.breakpoint.skbody.init();
        }
    },
    elastislide: {
        imageW: 110,
        path: {
            loader: 'images/ajax-loader.gif',
            black: 'images/black.png'
        }
    },
    initPlaceholder: function() {
        g.log('Init Placeholder');
        // Fallback placeholder HTML5
        if (!Modernizr.input.placeholder) {
            if ($.fn.placeholder)
                $('input[placeholder]').placeholder();
        }
    },
    init: function() {
        g.log('Init Notaires.fr');
        g.breakpoint.init();
        g.eventtype.init();
        g.initPlaceholder();
    }
};
(function($) {
    //
    g.init();
    //
    $(document).ready(function() {
        $('body').initSite();
        $(g.idBackTop).backtop();
        /*
         // mod-tab
         */
        $('.mod-tab').tab();
        $('.open-to-share').click(function() {
            event.preventDefault();
            return true;
        });
		/*
         // plus critere
         */
		 var oc_show = 0;
		 $('.tab-link-show').click(function() {
			 //alert ("ok");
			 if (oc_show === 0) {
				 $(this).addClass('plusopen');
				$(".hide").show();
				$(this).children(".plus").hide();
				$(this).children(".moins").show();
				oc_show = 1;
			 } else {
				  $(this).removeClass('plusopen');
				  $(".hide").hide();
				  $(this).children(".plus").show();
				  $(this).children(".moins").hide();
				  oc_show = 0;
			 }
			 return false;
		 });
        /*
         // menu-annuaire
         */
        var oc_slide = 0;
        $('.tab-list > li.active').click(function() {
            if (oc_slide === 0) {
                $(this).addClass('menu-open');
                $('.tab-list > li').show();
                oc_slide = 1;
            } else {
                $(this).removeClass('menu-open');
                $('.tab-list > li:not(.active)').hide();
                oc_slide = 0;
            }
            return false;
        });
        /*
         // mod-click
         */
        $(".title-fiche-tab").each(function() {
            if ($(this).is('.open')) {
                $(this).next('.body-fiche-tab').show();
            }
        });
        $('.title-fiche-tab').click(function() {
            $(this).toggleClass('open');
            $(this).next('.body-fiche-tab').slideToggle(500);
            return false;
        });
        // custom select
		if ($.fn.select2 ){
			$(".selectlist").select2();
		}
		//$('.selectlist').customSelect();
		//$('.selectlist').customSelect();
        /*if ($.fn.customSelect && $('select').length !== 0) {
            $('select').customSelect();
        }*/
        /*
         // datepicker
         */
		 if ($.fn.datepicker ){
			 $('.sprite-calendrier input').datepicker({
			format : "MM yyyy",
			minViewMode: 1,
			language: "fr",
			orientation: "top auto",
			forceParse: false,
			calendarWeeks: true,
			autoclose: false,
			todayHighlight: true
			});
			$('#start-date').on("changeMonth",function(e){
				$('#end-date').datepicker("setStartDate",e.date);
			});
			$('#end-date').on("changeMonth",function(e){
				$('#start-date').datepicker("setEndDate",e.date);
			});
		}
		
		//scroll MEnu
		if ($.fn.scrollMenu && $('.scroll-menu').length ){
			$.fn.scrollMenu();
		}
		
		//check height of menu
		/*$(".skheader-desktops .mega-menu .niv-2 > li").click(function(){
				$(".niv-2").height($(this).children(".niv-3").height());
				if ($(this) < 272) {
					$(".niv-2").height(272);
				}
				else {
					$(".niv-2").height($(this).children(".niv-3").height() + 50);
					return false;
				}
		})*/
		
		
		/*$(".skheader-desktops .mega-menu .niv-2 > li").mouseleave(function(){
			$(".niv-2").height(272);
			$(this).removeClass("open");
			$(this).children(".niv-3").hide();
		})*/
		

    }); // /ready
	
})(jQuery);
	
    // function call to initialize the browser when the browser size changes
    initBrowser = function($this) {
        // reset the browser
        resetBrowser($this);
    };
    // function call to reset the browser when the browser size changes
    resetBrowser = function($this) {
        //$('.portrait .mod-text-slide h3').toggelSlide();
		$('.skbody-mobile .mod-text-slide h3').toggelSlide();
    };
    // JavaScript Document
    $.fn.initSite = function() {
        // Add Class JS to body if browser js 
        $this = $(this);
        $this.addClass('js');
        // A Masquer si js est activé
        $(g.clas.js.hidden).addClass(g.clas.css.hidden).hide();
        // A Masquer si js est activé
        $(g.clas.js.display).addClass(g.clas.css.display).show();
        // A Metre en position absolute si js est activé
        $(g.clas.js.absolute).addClass(g.clas.css.absolute);
        // initialize the browser
        initBrowser($this);
        $(window).resize(function() {
            // reset the browser
            resetBrowser($this);
        });
    };
    $.fn.megamenu = function(bclone, c) {
        $megamenu = $(this);
        if (bclone) {
            g.originalState = $megamenu.clone();
        }
        // Int HTML
        $megamenu.replaceWith(g.originalState);
        g.log('Replace megamenu');

        if (c === g.breakpoint.skheader.desktops.c ) {
            g.log('init mega menu Desctop');
            initMegaMenuDesctop($megamenu);
        }
        if (c ===  g.breakpoint.skheader.tablet.c) {
            g.log('init mega menu Tablet');
            initMegaMenuTablet($megamenu);
        }
        if (c ===  g.breakpoint.skheader.mobile.c ) {
            g.log('init mega menu Mobile');
            initMegaMenuMobile($megamenu);
        }

        function initMegaMenuDesctop($megamenu) {
            // initMegaMenuDesctop
            //if($('body').hasClass('skheader-desktops')){
            megaMenuDestroy();
               //mega menu Desktop
				$(".skheader-desktops .mega-menu .niv-1 > li:not(.search)").hover(function(){
					//$(".niv-2").height(272);
					$(this).addClass("active");
					$(this).children(".niv-2").show();
					$(this).find(".niv-2 > li:first").addClass("open");
					$(this).find(".niv-2 > li:first").find(".niv-3").show();
					$(this).find(".niv-2").height($(this).find(".niv-2 > li:first").find(".niv-3").height()+50);
					var p = $(this).find(".niv-2 > li:first").find(".niv-3").height()+50;
					//			
					//$(".niv-2 > li:first-child").addClass("open");
					//$(".niv-2 > li:first-child").children(".niv-3").show();
					//var hm = $(".niv-2").height($(".niv-3").height() + 50);
					$(".sk-body").css( "padding-top", +p+"px" );
				});
				$(".skheader-desktops .mega-menu .niv-1 > li").mouseleave(function(){
					$(".niv-2").height(272);
					$(this).children(".niv-2").hide();
					$(this).removeClass("active");
					$(".niv-2 li").removeClass("open");
					$(".niv-3").hide();
					$(".sk-body").css( "padding-top", "0" );
				});
				$(".skheader-desktops .mega-menu .niv-2 > li").click(function(){
					//$(".niv-2").height(272);
					$(".niv-2 li").removeClass("open");
					$(".niv-3").hide();
					$(this).children(".niv-3").show();			
					$(this).addClass("open");
					$(".niv-2").height($(this).children(".niv-3").height() + 50);
					var p = $(this).find(".niv-3").height()+50;
					$(".sk-body").css( "padding-top", +p+"px" );
				});
        };
        function initMegaMenuTablet($megamenu) {
            //if($('body').hasClass('skheader-tablet')){
            megaMenuDestroy();
            // initMegaMenuTablet
            $('.skheader-tablet .mod-mega-menu .btn-nav').unbind('click');
            $('.skheader-tablet .mod-mega-menu .btn-nav').bind('click', function() {
                if ($('body.skheader-tablet').hasClass(g.classSuperBody.pushed)) {
                    $('body.skheader-tablet').closeNav(g.globalParamsMob.browserClass.modes.tablet);
                } else {
                    $('body.skheader-tablet').openNav(g.globalParamsMob.browserClass.modes.tablet);
                }
                return false;
            });
            $('.skheader-tablet .mod-mega-menu .niv-a li').click(function() {
                g.log('Clik .skheader-tablet .mod-mega-menu .niv-a li');
                $this = $(this);
                if ($this.hasClass('active')) {
                    closeMegaMenuItem($this);
                } else {
                    $itemActive = $this.parent('li');
                    closeMegaMenuItem($this);
                    openMegaMenuItem($this);
                }
                return false;
            });
        };
        function initMegaMenuMobile($megamenu) {
            // initMegaMenuMobile
            megaMenuDestroy();
            $('.skheader-mobile .mod-mega-menu .btn-nav').unbind('click');
            $('.skheader-mobile .mod-mega-menu .btn-nav').bind('click', function() {
                if ($('body.skheader-mobile').hasClass(g.classSuperBody.pushed)) {
                    $('body.skheader-mobile').closeNav(g.globalParamsMob.browserClass.modes.mobile);
                } else {
                    $('body.skheader-mobile').openNav(g.globalParamsMob.browserClass.modes.mobile);
                }
                return false;
            });
        };
        function megaMenuDestroy(){
            $('.header-mega-menu').removeAttr('style');
            $('.header-mega-menu *').removeAttr('style');
            $('.header-mega-menu .niv-a *').unbind('mouseenter').unbind("mouseleave").unbind('click').unbind("hover").unbind("hover").removeProp('hoverIntent_t').removeProp('hoverIntent_s');
        }
        function openMegaMenuItem($this) {
            $this.find(' > ul').slideDown(g.nav.animationSpeedItems, function() {
                $this.addClass('active open');
            });
        };
        function closeMegaMenuItem($this) {
            $parent = $this.parents();
            var niv = $parent.data('nav-niv'),
                    nextniv = niv + 1;
            g.log($parent.data('nav-niv'));
            g.log('niv-' + niv + ' Closed');
			if(niv == undefined){
            	g.log('---undefined-');	
				$('.niv-3').
				$('.niv-3 .niv-4 .niv').slideUp(g.nav.animationSpeedItems, function() {
					$('.niv-3').find('li.active').removeClass('active open');
				});
			}else{
				g.log('---OK-');	
				$('.niv-' + nextniv).slideUp(g.nav.animationSpeedItems, function() {
					$('.niv-' + niv).find('li.active').removeClass('active open');
				});
			}
        };
    };
    $.fn.openNav = function(support) {
        $thisNav = $(this);
        // if Tablet
        if (support === g.globalParamsMob.browserClass.modes.tablet) {
            $('.skheader-tablet .mod-mega-menu .mega-menu').animate({
                'marginLeft': "0" + g.globalParamsMob.offsetLeftNavTabUniter
            }, g.globalParamsMob.durationAnimation);
            $thisNav.addClass(g.classSuperBody.pushed).animate({
                left: g.globalParamsMob.offsetLeftNavTab + g.globalParamsMob.offsetLeftNavTabUniter
            }, g.globalParamsMob.durationAnimation, function() {
                $(this).append('<div class="layer-close-nav" id="layer-close-nav"></div>');
                $('.layer-close-nav').css('left', g.globalParamsMob.offsetLeftNavTab + g.globalParamsMob.offsetLeftNavTabUniter);
                $('.layer-close-nav').bind('click', function(event) {
                    $thisNav.closeNav(support);
                    return false;
                });
            });
        }
        if (support === g.globalParamsMob.browserClass.modes.mobile) {
            $thisNav.addClass(g.classSuperBody.pushed);
            $(this).append('<div class="layer-close-nav" id="layer-close-nav"></div>');
            $('.layer-close-nav').css('top', ($('.sk-header').height() + $('.mod-sub-nav-services').height()) + 'px');
            $('.layer-close-nav').bind('click', function(event) {
                $thisNav.closeNav(support);
                return false;
            });
            $('.sk-header-wrap .container-wrap > .container_5').one('click', function(event) {
                $thisNav.closeNav(support);
                return false;
            });
        }
    };
    $.fn.closeNav = function(support) {
        $this = $(this);
        // if Tablet
        if (support === g.globalParamsMob.browserClass.modes.tablet) {
            $('.skheader-tablet .mod-mega-menu .mega-menu').animate({
                'marginLeft': (-(parseInt(g.globalParamsMob.offsetLeftNavTab) + parseInt(g.globalParamsMob.offsetLeftNavTabNegative))) + g.globalParamsMob.offsetLeftNavTabUniter
            }, g.globalParamsMob.durationAnimation);
            $this.animate({
                left: "0" + g.globalParamsMob.offsetLeftNavTabUniter
            }, g.globalParamsMob.durationAnimation, function() {
                $this.removeClass(g.classSuperBody.pushed);
                $('.layer-close-nav').remove();
            });
        }
        if (support === g.globalParamsMob.browserClass.modes.mobile) {
            $this.removeClass(g.classSuperBody.pushed);
            $('.layer-close-nav').remove();
        }
    };
    $.fn.backtop = function(settings) {
        // This is the easiest way to have default options.
        var settings = $.extend({
                desktop : 100,
                tablets : 800,
                smartphone : 300,
                speed: 800
        }, settings);
        settings.desktop = ($('body').data('seuil-desktop') != 'undefined')? $('body').data('seuil-desktop') : settings.desktop;
        settings.tablets = ($('body').data('seuil-tablets') != 'undefined')? $('body').data('seuil-tablets') : settings.tablets;
        settings.smartphone = ($('body').data('seuil-smartphone') !== 'undefined')? $('body').data('seuil-smartphone') : settings.smartphone;
        $this = $(this);
        $this.hide();
        g.log(settings);
        initWindowsScroll($this, settings);
        
        $(window).resize(function() {
            // reset the browser
            initWindowsScroll($this, settings);
        });
        
        // scroll body to 0px on click
        $this.find('a').click(function() {
            $('body,html').animate({
                scrollTop: 0
            }, settings.speed);
            return false;
        });
        
        function initWindowsScroll($elem, options){
            var seuil = 0;
           if ($('body').hasClass(g.breakpoint.skheader.desktops.c)) {
                seuil = options.desktop;
            }
            if ($('body').hasClass(g.breakpoint.skheader.tablet.c)) {
                seuil = options.tablets;
            }
            if ($('body').hasClass(g.breakpoint.skheader.mobile.c)) {            
                seuil = options.smartphone;
            }
            g.log('seuil = '+seuil);
           $(window).scroll(function() {
            if ($(this).scrollTop() > seuil) {
                $elem.show(0);
            } else {
                $elem.hide(0);
            }
        }); 
        }
        
    };
    $.fn.changerTaille = function(options) {
        // This is the easiest way to have default options.
        var settings = $.extend({
            // These are the defaults.
            modif: 0.1
        }, options);
        return this.each(function() {
            $(this).click(function() {
                g.defaultSize = g.defaultSize + settings.modif;
                $('body .container-midel-wrap').css('fontSize', g.defaultSize + g.uFontSize);
            });
        });
    };
	$.fn.scrollMenu = function(options){
		//animate fixed box on scroll
		//$(".right-content-top").height();
		var $sidebar   = $(".scroll-menu"),
			$window    = $(window),
			offset     = $sidebar.offset();
		$window.scroll(function() {
			var wind_w = $(window).width();
			var wind_h = $(window).height();
			var max_h  = $(".right-content-top").height();
			var fixm_h = $(".scroll-menu").height();
//			alert( $window.scrollTop());
//			alert(fixm_h + offset.top );
			if((max_h+ $(".right-content-top").offset().top) > (fixm_h + $window.scrollTop())){
				if ($window.scrollTop() > offset.top && wind_h > fixm_h && wind_w > 465) {
					$sidebar.stop().animate({
						'top': $window.scrollTop() - offset.top - 45
					});
				} else {
					$sidebar.stop().animate({
						'top': 0
					});
				}
			}
		});
	}
    $.fn.toggelSlide = function(options) {
        //open and close slide text
        $(this).unbind('click');
        $(this).bind('click', function() {
        })
    };
    $.fn.tab = function(options) {
        // This is the easiest way to have default options.
        var settings = $.extend({
            // These are the defaults.
        }, options),
                idtab;
        return this.each(function() {
            $tabcontent = $(this).find('.tab-content');
            $tablist = $(this).find('.tab-list');
            $tabcontent.find(' > li:nth-child(n+2)').hide();
            $tablist.find('> li .tab-link').bind('focus', function() {
                $tablist.find('> li.active').removeClass('active');
                idtab = $(this).data('idtab');
                $tabcontent.find(' > li').hide();
                $tabcontent.find(' > li#' + idtab).show();
                $(this).parent().addClass('active');
                return false;
            });
            $tablist.find('> li .tab-link').bind('click', function() {
                $tablist.find('> li.active').removeClass('active');
                idtab = $(this).data('idtab');
                $tabcontent.find(' > li').hide();
                $tabcontent.find(' > li#' + idtab).show();
                $(this).parent().addClass('active');
                return false;
            });
        });
    };
	
	$.fn.destroy = function(child){
		$this = $(this);
		$this.removeAttr('style');
        destroyBind($this);
		if(child){
			$this.find(' * ').removeAttr('style');
	 		destroyBind($this.find(' * '));
		}
		function destroyBind($e){
			$e.unbind('mouseenter').unbind("mouseleave").unbind('click').unbind("hover").unbind("hover").removeProp('hoverIntent_t').removeProp('hoverIntent_s');
			
		}
	}