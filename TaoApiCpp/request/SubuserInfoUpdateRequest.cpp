#include <TaoApiCpp/request/SubuserInfoUpdateRequest.h>

QString SubuserInfoUpdateRequest::getApiMethodName() const {
  return "taobao.subuser.info.update";
}

bool SubuserInfoUpdateRequest::getIsDisableSubaccount() const {
  return isDisableSubaccount;
}
void SubuserInfoUpdateRequest::setIsDisableSubaccount (bool isDisableSubaccount) {
  this->isDisableSubaccount = isDisableSubaccount;
  appParams.insert("is_disable_subaccount", isDisableSubaccount? "true": "false");
}

bool SubuserInfoUpdateRequest::getIsDispatch() const {
  return isDispatch;
}
void SubuserInfoUpdateRequest::setIsDispatch (bool isDispatch) {
  this->isDispatch = isDispatch;
  appParams.insert("is_dispatch", isDispatch? "true": "false");
}

qlonglong SubuserInfoUpdateRequest::getSubId() const {
  return subId;
}
void SubuserInfoUpdateRequest::setSubId (qlonglong subId) {
  this->subId = subId;
  appParams.insert("sub_id", QString::number(subId));
}



SubuserInfoUpdateResponse *SubuserInfoUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SubuserInfoUpdateResponse *tmpResponse = new SubuserInfoUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
