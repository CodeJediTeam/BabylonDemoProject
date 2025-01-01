#pragma once

#include <System/IAppConfigurator.h>

namespace App
{

class AppConfigurator final : public Babylon::System::IAppConfigurator
{
public:
    void Configure() override;
};

} // namespace App
