var canHide = true;

$(document).ready(function() {

  symbols = ['Á', 'É', 'Ó', 'á', 'é', 'ó', 'Ã', 'Ẽ', 'Ĩ', 'Õ', 'Ũ', 'Ỹ', 'ã', 'ẽ', 'ĩ', 'õ', 'ũ', 'ỹ'];

  $('textarea').after('<div class="special-chars"></div>');
  $('input[type=text]').after('<div class="special-chars"></div>');

  $('.special-chars').each(function() {

    $toolbar = $(this);

    $.each(symbols, function() {
      symbol = this;
      $toolbar.append('<input type="button" value="'+symbol+'" />');
    });

  });

  $('.special-chars').hover(function() {
    canHide = false;
  },
  function() {
    canHide = true;
  });

  $('.special-chars input').click(function() {
    $button = $(this);
    $field = $button.parent().prev();
    insertAtCaret($field.attr('id'), $button.attr('value'));    
  });

  $('.special-chars').hide();

  $('input[type=text]').focus(showChars);
  $('textarea').focus(showChars);
  $('input[type=text]').blur(hideChars);
  $('textarea').blur(hideChars);

});

showChars = function() {
  $(this).next().show();
}

hideChars = function() {
  if (canHide) {
    $(this).next().hide();
  }
}

function insertAtCaret(areaId,text) {
	var txtarea = document.getElementById(areaId);
	var scrollPos = txtarea.scrollTop;
	var strPos = 0;
	var br = ((txtarea.selectionStart || txtarea.selectionStart == '0') ? 
		"ff" : (document.selection ? "ie" : false ) );
	if (br == "ie") { 
		txtarea.focus();
		var range = document.selection.createRange();
		range.moveStart ('character', -txtarea.value.length);
		strPos = range.text.length;
	}
	else if (br == "ff") strPos = txtarea.selectionStart;
	
	var front = (txtarea.value).substring(0,strPos);  
	var back = (txtarea.value).substring(strPos,txtarea.value.length); 
	txtarea.value=front+text+back;
	strPos = strPos + text.length;
	if (br == "ie") { 
		txtarea.focus();
		var range = document.selection.createRange();
		range.moveStart ('character', -txtarea.value.length);
		range.moveStart ('character', strPos);
		range.moveEnd ('character', 0);
		range.select();
	}
	else if (br == "ff") {
		txtarea.selectionStart = strPos;
		txtarea.selectionEnd = strPos;
		txtarea.focus();
	}
	txtarea.scrollTop = scrollPos;
}
