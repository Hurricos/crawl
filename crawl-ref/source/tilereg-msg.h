#ifdef USE_TILE_LOCAL
#ifndef TILEREG_MSG_H
#define TILEREG_MSG_H

#include "tilereg-text.h"

class MessageRegion : public TextRegion
{
public:
    MessageRegion(FontWrapper *font);

    void set_overlay(bool is_overlay);

    virtual int handle_mouse(MouseEvent &event) override;
    virtual void render() override;
    virtual bool update_tip_text(string &tip) override;

    string &alt_text() { return m_alt_text; }
protected:
    string m_alt_text;
    bool m_overlay;
};

#endif
#endif
