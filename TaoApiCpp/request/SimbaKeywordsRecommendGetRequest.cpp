#include <TaoApiCpp/request/SimbaKeywordsRecommendGetRequest.h>

QString SimbaKeywordsRecommendGetRequest::getApiMethodName() const {
  return "taobao.simba.keywords.recommend.get";
}

qlonglong SimbaKeywordsRecommendGetRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaKeywordsRecommendGetRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

QString SimbaKeywordsRecommendGetRequest::getNick() const {
  return nick;
}
void SimbaKeywordsRecommendGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString SimbaKeywordsRecommendGetRequest::getOrderBy() const {
  return orderBy;
}
void SimbaKeywordsRecommendGetRequest::setOrderBy (QString orderBy) {
  this->orderBy = orderBy;
  appParams.insert("order_by", orderBy);
}

qlonglong SimbaKeywordsRecommendGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaKeywordsRecommendGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaKeywordsRecommendGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaKeywordsRecommendGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString SimbaKeywordsRecommendGetRequest::getPertinence() const {
  return pertinence;
}
void SimbaKeywordsRecommendGetRequest::setPertinence (QString pertinence) {
  this->pertinence = pertinence;
  appParams.insert("pertinence", pertinence);
}

qlonglong SimbaKeywordsRecommendGetRequest::getSearch() const {
  return search;
}
void SimbaKeywordsRecommendGetRequest::setSearch (qlonglong search) {
  this->search = search;
  appParams.insert("search", QString::number(search));
}



SimbaKeywordsRecommendGetResponse *SimbaKeywordsRecommendGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaKeywordsRecommendGetResponse *tmpResponse = new SimbaKeywordsRecommendGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
