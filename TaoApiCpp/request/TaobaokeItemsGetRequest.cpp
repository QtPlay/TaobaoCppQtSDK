#include <TaoApiCpp/request/TaobaokeItemsGetRequest.h>

QString TaobaokeItemsGetRequest::getApiMethodName() const {
  return "taobao.taobaoke.items.get";
}

QString TaobaokeItemsGetRequest::getArea() const {
  return area;
}
void TaobaokeItemsGetRequest::setArea (QString area) {
  this->area = area;
  appParams.insert("area", area);
}

QString TaobaokeItemsGetRequest::getAutoSend() const {
  return autoSend;
}
void TaobaokeItemsGetRequest::setAutoSend (QString autoSend) {
  this->autoSend = autoSend;
  appParams.insert("auto_send", autoSend);
}

QString TaobaokeItemsGetRequest::getCashCoupon() const {
  return cashCoupon;
}
void TaobaokeItemsGetRequest::setCashCoupon (QString cashCoupon) {
  this->cashCoupon = cashCoupon;
  appParams.insert("cash_coupon", cashCoupon);
}

QString TaobaokeItemsGetRequest::getCashOndelivery() const {
  return cashOndelivery;
}
void TaobaokeItemsGetRequest::setCashOndelivery (QString cashOndelivery) {
  this->cashOndelivery = cashOndelivery;
  appParams.insert("cash_ondelivery", cashOndelivery);
}

qlonglong TaobaokeItemsGetRequest::getCid() const {
  return cid;
}
void TaobaokeItemsGetRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}

QString TaobaokeItemsGetRequest::getEndCommissionNum() const {
  return endCommissionNum;
}
void TaobaokeItemsGetRequest::setEndCommissionNum (QString endCommissionNum) {
  this->endCommissionNum = endCommissionNum;
  appParams.insert("end_commissionNum", endCommissionNum);
}

QString TaobaokeItemsGetRequest::getEndCommissionRate() const {
  return endCommissionRate;
}
void TaobaokeItemsGetRequest::setEndCommissionRate (QString endCommissionRate) {
  this->endCommissionRate = endCommissionRate;
  appParams.insert("end_commissionRate", endCommissionRate);
}

QString TaobaokeItemsGetRequest::getEndCredit() const {
  return endCredit;
}
void TaobaokeItemsGetRequest::setEndCredit (QString endCredit) {
  this->endCredit = endCredit;
  appParams.insert("end_credit", endCredit);
}

QString TaobaokeItemsGetRequest::getEndPrice() const {
  return endPrice;
}
void TaobaokeItemsGetRequest::setEndPrice (QString endPrice) {
  this->endPrice = endPrice;
  appParams.insert("end_price", endPrice);
}

QString TaobaokeItemsGetRequest::getEndTotalnum() const {
  return endTotalnum;
}
void TaobaokeItemsGetRequest::setEndTotalnum (QString endTotalnum) {
  this->endTotalnum = endTotalnum;
  appParams.insert("end_totalnum", endTotalnum);
}

QString TaobaokeItemsGetRequest::getFields() const {
  return fields;
}
void TaobaokeItemsGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QString TaobaokeItemsGetRequest::getGuarantee() const {
  return guarantee;
}
void TaobaokeItemsGetRequest::setGuarantee (QString guarantee) {
  this->guarantee = guarantee;
  appParams.insert("guarantee", guarantee);
}

bool TaobaokeItemsGetRequest::getIsMobile() const {
  return isMobile;
}
void TaobaokeItemsGetRequest::setIsMobile (bool isMobile) {
  this->isMobile = isMobile;
  appParams.insert("is_mobile", isMobile? "true": "false");
}

QString TaobaokeItemsGetRequest::getKeyword() const {
  return keyword;
}
void TaobaokeItemsGetRequest::setKeyword (QString keyword) {
  this->keyword = keyword;
  appParams.insert("keyword", keyword);
}

QString TaobaokeItemsGetRequest::getMallItem() const {
  return mallItem;
}
void TaobaokeItemsGetRequest::setMallItem (QString mallItem) {
  this->mallItem = mallItem;
  appParams.insert("mall_item", mallItem);
}

QString TaobaokeItemsGetRequest::getNick() const {
  return nick;
}
void TaobaokeItemsGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString TaobaokeItemsGetRequest::getOnemonthRepair() const {
  return onemonthRepair;
}
void TaobaokeItemsGetRequest::setOnemonthRepair (QString onemonthRepair) {
  this->onemonthRepair = onemonthRepair;
  appParams.insert("onemonth_repair", onemonthRepair);
}

QString TaobaokeItemsGetRequest::getOuterCode() const {
  return outerCode;
}
void TaobaokeItemsGetRequest::setOuterCode (QString outerCode) {
  this->outerCode = outerCode;
  appParams.insert("outer_code", outerCode);
}

QString TaobaokeItemsGetRequest::getOverseasItem() const {
  return overseasItem;
}
void TaobaokeItemsGetRequest::setOverseasItem (QString overseasItem) {
  this->overseasItem = overseasItem;
  appParams.insert("overseas_item", overseasItem);
}

qlonglong TaobaokeItemsGetRequest::getPageNo() const {
  return pageNo;
}
void TaobaokeItemsGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong TaobaokeItemsGetRequest::getPageSize() const {
  return pageSize;
}
void TaobaokeItemsGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

qlonglong TaobaokeItemsGetRequest::getPid() const {
  return pid;
}
void TaobaokeItemsGetRequest::setPid (qlonglong pid) {
  this->pid = pid;
  appParams.insert("pid", QString::number(pid));
}

QString TaobaokeItemsGetRequest::getRealDescribe() const {
  return realDescribe;
}
void TaobaokeItemsGetRequest::setRealDescribe (QString realDescribe) {
  this->realDescribe = realDescribe;
  appParams.insert("real_describe", realDescribe);
}

qlonglong TaobaokeItemsGetRequest::getReferType() const {
  return referType;
}
void TaobaokeItemsGetRequest::setReferType (qlonglong referType) {
  this->referType = referType;
  appParams.insert("refer_type", QString::number(referType));
}

QString TaobaokeItemsGetRequest::getSevendaysReturn() const {
  return sevendaysReturn;
}
void TaobaokeItemsGetRequest::setSevendaysReturn (QString sevendaysReturn) {
  this->sevendaysReturn = sevendaysReturn;
  appParams.insert("sevendays_return", sevendaysReturn);
}

QString TaobaokeItemsGetRequest::getSort() const {
  return sort;
}
void TaobaokeItemsGetRequest::setSort (QString sort) {
  this->sort = sort;
  appParams.insert("sort", sort);
}

QString TaobaokeItemsGetRequest::getStartCommissionNum() const {
  return startCommissionNum;
}
void TaobaokeItemsGetRequest::setStartCommissionNum (QString startCommissionNum) {
  this->startCommissionNum = startCommissionNum;
  appParams.insert("start_commissionNum", startCommissionNum);
}

QString TaobaokeItemsGetRequest::getStartCommissionRate() const {
  return startCommissionRate;
}
void TaobaokeItemsGetRequest::setStartCommissionRate (QString startCommissionRate) {
  this->startCommissionRate = startCommissionRate;
  appParams.insert("start_commissionRate", startCommissionRate);
}

QString TaobaokeItemsGetRequest::getStartCredit() const {
  return startCredit;
}
void TaobaokeItemsGetRequest::setStartCredit (QString startCredit) {
  this->startCredit = startCredit;
  appParams.insert("start_credit", startCredit);
}

QString TaobaokeItemsGetRequest::getStartPrice() const {
  return startPrice;
}
void TaobaokeItemsGetRequest::setStartPrice (QString startPrice) {
  this->startPrice = startPrice;
  appParams.insert("start_price", startPrice);
}

QString TaobaokeItemsGetRequest::getStartTotalnum() const {
  return startTotalnum;
}
void TaobaokeItemsGetRequest::setStartTotalnum (QString startTotalnum) {
  this->startTotalnum = startTotalnum;
  appParams.insert("start_totalnum", startTotalnum);
}

QString TaobaokeItemsGetRequest::getVipCard() const {
  return vipCard;
}
void TaobaokeItemsGetRequest::setVipCard (QString vipCard) {
  this->vipCard = vipCard;
  appParams.insert("vip_card", vipCard);
}



TaobaokeItemsGetResponse *TaobaokeItemsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TaobaokeItemsGetResponse *tmpResponse = new TaobaokeItemsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
