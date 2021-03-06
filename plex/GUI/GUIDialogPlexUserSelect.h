#ifndef GUIDIALOGPLEXUSERSELECT_H
#define GUIDIALOGPLEXUSERSELECT_H

#include "dialogs/GUIDialogSelect.h"
#include "Job.h"

class CGUIDialogPlexUserSelect : public CGUIDialogSelect// , public IJobCallback
{
public:
  CGUIDialogPlexUserSelect();
  bool OnMessage(CGUIMessage &message);
  void OnSelected();
  bool OnAction(const CAction &action);
  bool DidAuth() { return m_authed; }
  bool DidSwitchUser() { return m_userSwitched; }

private:
  void fetchUsers();
//  void OnJobComplete(unsigned int jobID, bool success, CJob *job);
  bool m_authed;
  bool m_userSwitched;
};

#endif // GUIDIALOGPLEXUSERSELECT_H
