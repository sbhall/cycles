#ifndef CYCLES_INIT_DOT_H
#define CYCLES_INIT_DOT_H

#include <dmzAppShellExt.h>
#include <QtGui/QDialog>
#include <ui_cyclesInit.h>

namespace dmz {

class CyclesInit : public QDialog {

   Q_OBJECT

   public:
      CyclesInit (AppShellInitStruct &init);
      ~CyclesInit ();

      AppShellInitStruct &init;
      Ui::cyclesSetupForm ui;

   protected slots:
      void on_buttonBox_accepted ();
      void on_buttonBox_rejected ();
      void on_buttonBox_helpRequested ();

   protected:
      virtual void closeEvent (QCloseEvent * event);

      Boolean _start;
};

};

#endif // CYCLES_INIT_DOT_H
