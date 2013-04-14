#include <TaoApiCpp/request/TaobaokeShopsGetRequest.h>

QString TaobaokeShopsGetRequest::getApiMethodName() const {
  return "taobao.taobaoke.shops.get";
}

qlonglong TaobaokeShopsGetRequest::getCid() const {
  return cid;
}
void TaobaokeShopsGetRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}

QString TaobaokeShopsGetRequest::getEndAuctioncount() const {
  return endAuctioncount;
}
void TaobaokeShopsGetRequest::setEndAuctioncount (QString endAuctioncount) {
  this->endAuctioncount = endAuctioncount;
  appParams.insert("end_auctioncount", endAuctioncount);
}

QString TaobaokeShopsGetRequest::getEndCommissionrate() const {
  return endCommissionrate;
}
void TaobaokeShopsGetRequest::setEndCommissionrate (QString endCommissionrate) {
  this->endCommissionrate = endCommissionrate;
  appParams.insert("end_commissionrate", endCommissionrate);
}

QString TaobaokeShopsGetRequest::getEndCredit() const {
  return endCredit;
}
void TaobaokeShopsGetRequest::setEndCredit (QString endCredit) {
  this->endCredit = endCredit;
  appParams.insert("end_credit", endCredit);
}

QString TaobaokeShopsGetRequest::getEndTotalaction() const {
  return endTotalaction;
}
void TaobaokeShopsGetRequest::setEndTotalaction (QString endTotalaction) {
  this->endTotalaction = endTotalaction;
  appParams.insert("end_totalaction", endTotalaction);
}

QString TaobaokeShopsGetRequest::getFields() const {
  return fields;
}
void TaobaokeShopsGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

bool TaobaokeShopsGetRequest::getIsMobile() const {
  return isMobile;
}
void TaobaokeShopsGetRequest::setIsMobile (bool isMobile) {
  this->isMobile = isMobile;
  appParams.insert("is_mobile", isMobile? "true": "false");
}

QString TaobaokeShopsGetRequest::getKeyword() const {
  return keyword;
}
void TaobaokeShopsGetRequest::setKeyword (QString keyword) {
  this->keyword = keyword;
  appParams.insert("keyword", keyword);
}

QString TaobaokeShopsGetRequest::getNick() const {
  return nick;
}
void TaobaokeShopsGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

bool TaobaokeShopsGetRequest::getOnlyMall() const {
  return onlyMall;
}
void TaobaokeShopsGetRequest::setOnlyMall (bool onlyMall) {
  this->onlyMall = onlyMall;
  appParams.insert("only_mall", onlyMall? "true": "false");
}

QString TaobaokeShopsGetRequest::getOuterCode() const {
  return outerCode;
}
void TaobaokeShopsGetRequest::setOuterCode (QString outerCode) {
  this->outerCode = outerCode;
  appParams.insert("outer_code", outerCode);
}

qlonglong TaobaokeShopsGetRequest::getPageNo() const {
  return pageNo;
}
void TaobaokeShopsGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong TaobaokeShopsGetRequest::getPageSize() const {
  return pageSize;
}
void TaobaokeShopsGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

qlonglong TaobaokeShopsGetRequest::getPid() const {
  return pid;
}
void TaobaokeShopsGetRequest::setPid (qlonglong pid) {
  this->pid = pid;
  appParams.insert("pid", QString::number(pid));
}

QString TaobaokeShopsGetRequest::getSortField() const {
  return sortField;
}
void TaobaokeShopsGetRequest::setSortField (QString sortField) {
  this->sortField = sortField;
  appParams.insert("sort_field", sortField);
}

QString TaobaokeShopsGetRequest::getSortType() const {
  return sortType;
}
void TaobaokeShopsGetRequest::setSortType (QString sortType) {
  this->sortType = sortType;
  appParams.insert("sort_type", sortType);
}

QString TaobaokeShopsGetRequest::getStartAuctioncount() const {
  return startAuctioncount;
}
void TaobaokeShopsGetRequest::setStartAuctioncount (QString startAuctioncount) {
  this->startAuctioncount = startAuctioncount;
  appParams.insert("start_auctioncount", startAuctioncount);
}

QString TaobaokeShopsGetRequest::getStartCommissionrate() const {
  return startCommissionrate;
}
void TaobaokeShopsGetRequest::setStartCommissionrate (QString startCommissionrate) {
  this->startCommissionrate = startCommissionrate;
  appParams.insert("start_commissionrate", startCommissionrate);
}

QString TaobaokeShopsGetRequest::getStartCredit() const {
  return startCredit;
}
void TaobaokeShopsGetRequest::setStartCredit (QString startCredit) {
  this->startCredit = startCredit;
  appParams.insert("start_credit", startCredit);
}

QString TaobaokeShopsGetRequest::getStartTotalaction() const {
  return startTotalaction;
}
void TaobaokeShopsGetRequest::setStartTotalaction (QString startTotalaction) {
  this->startTotalaction = startTotalaction;
  appParams.insert("start_totalaction", startTotalaction);
}



TaobaokeShopsGetResponse *TaobaokeShopsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TaobaokeShopsGetResponse *tmpResponse = new TaobaokeShopsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
