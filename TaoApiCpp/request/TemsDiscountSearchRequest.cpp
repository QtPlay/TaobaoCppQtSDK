#include <TaoApiCpp/request/TemsDiscountSearchRequest.h>

QString TemsDiscountSearchRequest::getApiMethodName() const {
  return "tmall.items.discount.search";
}

qlonglong TemsDiscountSearchRequest::getAuctionTag() const {
  return auctionTag;
}
void TemsDiscountSearchRequest::setAuctionTag (qlonglong auctionTag) {
  this->auctionTag = auctionTag;
  appParams.insert("auction_tag", QString::number(auctionTag));
}

qlonglong TemsDiscountSearchRequest::getBrand() const {
  return brand;
}
void TemsDiscountSearchRequest::setBrand (qlonglong brand) {
  this->brand = brand;
  appParams.insert("brand", QString::number(brand));
}

QString TemsDiscountSearchRequest::getCat() const {
  return cat;
}
void TemsDiscountSearchRequest::setCat (QString cat) {
  this->cat = cat;
  appParams.insert("cat", cat);
}

QString TemsDiscountSearchRequest::getEndPrice() const {
  return endPrice;
}
void TemsDiscountSearchRequest::setEndPrice (QString endPrice) {
  this->endPrice = endPrice;
  appParams.insert("end_price", endPrice);
}

qlonglong TemsDiscountSearchRequest::getPostFee() const {
  return postFee;
}
void TemsDiscountSearchRequest::setPostFee (qlonglong postFee) {
  this->postFee = postFee;
  appParams.insert("post_fee", QString::number(postFee));
}

QString TemsDiscountSearchRequest::getQ() const {
  return q;
}
void TemsDiscountSearchRequest::setQ (QString q) {
  this->q = q;
  appParams.insert("q", q);
}

QString TemsDiscountSearchRequest::getSort() const {
  return sort;
}
void TemsDiscountSearchRequest::setSort (QString sort) {
  this->sort = sort;
  appParams.insert("sort", sort);
}

qlonglong TemsDiscountSearchRequest::getStart() const {
  return start;
}
void TemsDiscountSearchRequest::setStart (qlonglong start) {
  this->start = start;
  appParams.insert("start", QString::number(start));
}

QString TemsDiscountSearchRequest::getStartPrice() const {
  return startPrice;
}
void TemsDiscountSearchRequest::setStartPrice (QString startPrice) {
  this->startPrice = startPrice;
  appParams.insert("start_price", startPrice);
}



TemsDiscountSearchResponse *TemsDiscountSearchRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TemsDiscountSearchResponse *tmpResponse = new TemsDiscountSearchResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
