/****************************************************************************
** Form implementation generated from reading ui file 'deleteindexform.ui'
**
** Created: Sat May 5 20:10:29 2012
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.2.1   edited May 19 14:22 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "deleteindexform.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qcombobox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "qmessagebox.h"
#include "deleteindexform.ui.h"
/*
 *  Constructs a deleteIndexForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
deleteIndexForm::deleteIndexForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "deleteIndexForm" );
    deleteIndexFormLayout = new QVBoxLayout( this, 11, 6, "deleteIndexFormLayout"); 

    layout21 = new QHBoxLayout( 0, 0, 6, "layout21"); 

    textLabel2 = new QLabel( this, "textLabel2" );
    layout21->addWidget( textLabel2 );

    comboOptions = new QComboBox( FALSE, this, "comboOptions" );
    layout21->addWidget( comboOptions );
    deleteIndexFormLayout->addLayout( layout21 );
    QSpacerItem* spacer = new QSpacerItem( 20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding );
    deleteIndexFormLayout->addItem( spacer );

    layout19 = new QHBoxLayout( 0, 0, 6, "layout19"); 
    QSpacerItem* spacer_2 = new QSpacerItem( 31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout19->addItem( spacer_2 );

    buttonDelete = new QPushButton( this, "buttonDelete" );
    layout19->addWidget( buttonDelete );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setDefault( TRUE );
    layout19->addWidget( buttonCancel );
    deleteIndexFormLayout->addLayout( layout19 );
    languageChange();
    resize( QSize(236, 137).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonDelete, SIGNAL( clicked() ), this, SLOT( confirmDelete() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
deleteIndexForm::~deleteIndexForm()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void deleteIndexForm::languageChange()
{
    setCaption( tr( "Delete Index" ) );
    textLabel2->setText( tr( "Index name:" ) );
    QToolTip::add( comboOptions, tr( "Choose the index to delete" ) );
    QWhatsThis::add( comboOptions, tr( "Use this control to select the name of the index to be deleted" ) );
    buttonDelete->setText( tr( "Delete" ) );
    QToolTip::add( buttonDelete, tr( "Delete the selected index" ) );
    buttonCancel->setText( tr( "Cancel" ) );
    QToolTip::add( buttonCancel, tr( "Cancel and close dialog box" ) );
}

