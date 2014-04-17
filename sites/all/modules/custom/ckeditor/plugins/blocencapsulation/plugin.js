CKEDITOR.plugins.add( 'blocencapsulation',
{
	init: function( editor )
	{
		editor.addCommand( 'simpleLinkDialog', new CKEDITOR.dialogCommand( 'simpleLinkDialog' ) );
 
		editor.ui.addButton( 'SimpleLink',
		{
			label: 'Insert HTML',
			command: 'simpleLinkDialog',
			icon: this.path + 'html_add.png'
		} );
 
		CKEDITOR.dialog.add( 'simpleLinkDialog', function( editor )
		{
			return {
				title : 'Link Properties',
				minWidth : 400,
				minHeight : 200,
				contents :
				[
					{
						id : 'general',
						label : 'Settings',
						elements :
						[
							{
								type : 'html',
								html : 'Cette boîte de dialogue vous permet de créer du code HTML pour votre site web.'		
							},
							{
								type : 'textarea',
								id : 'contents',
								label : 'Displayed Text',
								validate : CKEDITOR.dialog.validate.notEmpty( 'The Displayed Text field cannot be empty.' ),
								required : true,
								commit : function( data )
								{
									data.contents = this.getValue();
								}
							}
						]
					}
				],
				onOk : function()
				{
					var dialog = this,
						data = {},
						link = editor.document.createElement( 'p' );
					this.commitContent( data );
 
					
 
					
 
					
					link.setHtml( data.contents );
 
					editor.insertElement( link );
				}
			};
		});
	}
});