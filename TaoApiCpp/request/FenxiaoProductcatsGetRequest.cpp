#include <TaoApiCpp/request/FenxiaoProductcatsGetRequest.h>

QString FenxiaoProductcatsGetRequest::getApiMethodName() const {
  return "taobao.fenxiao.productcats.get";
}

QString FenxiaoProductcatsGetRequest::getFields() const {
  return fields;
}
void FenxiaoProductcatsGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}



FenxiaoProductcatsGetResponse *FenxiaoProductcatsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoProductcatsGetResponse *tmpResponse = new FenxiaoProductcatsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
