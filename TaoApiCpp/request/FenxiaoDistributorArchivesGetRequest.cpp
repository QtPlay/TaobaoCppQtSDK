#include <TaoApiCpp/request/FenxiaoDistributorArchivesGetRequest.h>

QString FenxiaoDistributorArchivesGetRequest::getApiMethodName() const {
  return "taobao.fenxiao.distributor.archives.get";
}

QString FenxiaoDistributorArchivesGetRequest::getDistributorUserNick() const {
  return distributorUserNick;
}
void FenxiaoDistributorArchivesGetRequest::setDistributorUserNick (QString distributorUserNick) {
  this->distributorUserNick = distributorUserNick;
  appParams.insert("distributor_user_nick", distributorUserNick);
}



FenxiaoDistributorArchivesGetResponse *FenxiaoDistributorArchivesGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoDistributorArchivesGetResponse *tmpResponse = new FenxiaoDistributorArchivesGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
