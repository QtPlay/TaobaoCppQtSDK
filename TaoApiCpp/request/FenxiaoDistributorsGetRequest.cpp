#include <TaoApiCpp/request/FenxiaoDistributorsGetRequest.h>

QString FenxiaoDistributorsGetRequest::getApiMethodName() const {
  return "taobao.fenxiao.distributors.get";
}

QString FenxiaoDistributorsGetRequest::getNicks() const {
  return nicks;
}
void FenxiaoDistributorsGetRequest::setNicks (QString nicks) {
  this->nicks = nicks;
  appParams.insert("nicks", nicks);
}



FenxiaoDistributorsGetResponse *FenxiaoDistributorsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoDistributorsGetResponse *tmpResponse = new FenxiaoDistributorsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
