#include "common.hpp"

class ResetMenu
{
private:
   
public:
    void Draw(void) const override;
	void Logic(u32 hDown, u32 hHeld, touchPosition touch) override;
};


