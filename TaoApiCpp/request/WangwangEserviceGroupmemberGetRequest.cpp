#include <TaoApiCpp/request/WangwangEserviceGroupmemberGetRequest.h>

QString WangwangEserviceGroupmemberGetRequest::getApiMethodName() const {
  return "taobao.wangwang.eservice.groupmember.get";
}

QString WangwangEserviceGroupmemberGetRequest::getManagerId() const {
  return managerId;
}
void WangwangEserviceGroupmemberGetRequest::setManagerId (QString managerId) {
  this->managerId = managerId;
  appParams.insert("manager_id", managerId);
}



WangwangEserviceGroupmemberGetResponse *WangwangEserviceGroupmemberGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WangwangEserviceGroupmemberGetResponse *tmpResponse = new WangwangEserviceGroupmemberGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
