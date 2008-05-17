
#include <NormalResultHandler.h>
#include <Any.h>

MOCKCPP_NS_START

///////////////////////////////////////////////////////////////////////////
NormalResultHandler::NormalResultHandler(const std::type_info& typeInfo)
   : expectedTypeInfo(typeInfo)
{
}

///////////////////////////////////////////////////////////////////////////
bool NormalResultHandler::matches(const Any& result) const
{
      return result.type() == expectedTypeInfo;
}

///////////////////////////////////////////////////////////////////////////
Any& NormalResultHandler::getResult(const Any& result) const
{
    return const_cast<Any&>(result);
}

///////////////////////////////////////////////////////////////////////////

MOCKCPP_NS_END
