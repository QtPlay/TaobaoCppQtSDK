#include <TaoApiCpp/request/CaipiaoGoodsInfoInputRequest.h>

QString CaipiaoGoodsInfoInputRequest::getApiMethodName() const {
  return "taobao.caipiao.goods.info.input";
}

QString CaipiaoGoodsInfoInputRequest::getActEndDate() const {
  return actEndDate;
}
void CaipiaoGoodsInfoInputRequest::setActEndDate (QString actEndDate) {
  this->actEndDate = actEndDate;
  appParams.insert("act_end_date", actEndDate);
}

QString CaipiaoGoodsInfoInputRequest::getActStartDate() const {
  return actStartDate;
}
void CaipiaoGoodsInfoInputRequest::setActStartDate (QString actStartDate) {
  this->actStartDate = actStartDate;
  appParams.insert("act_start_date", actStartDate);
}

QString CaipiaoGoodsInfoInputRequest::getGoodsDesc() const {
  return goodsDesc;
}
void CaipiaoGoodsInfoInputRequest::setGoodsDesc (QString goodsDesc) {
  this->goodsDesc = goodsDesc;
  appParams.insert("goods_desc", goodsDesc);
}

qlonglong CaipiaoGoodsInfoInputRequest::getGoodsId() const {
  return goodsId;
}
void CaipiaoGoodsInfoInputRequest::setGoodsId (qlonglong goodsId) {
  this->goodsId = goodsId;
  appParams.insert("goods_id", QString::number(goodsId));
}

QString CaipiaoGoodsInfoInputRequest::getGoodsImage() const {
  return goodsImage;
}
void CaipiaoGoodsInfoInputRequest::setGoodsImage (QString goodsImage) {
  this->goodsImage = goodsImage;
  appParams.insert("goods_image", goodsImage);
}

QString CaipiaoGoodsInfoInputRequest::getGoodsPrice() const {
  return goodsPrice;
}
void CaipiaoGoodsInfoInputRequest::setGoodsPrice (QString goodsPrice) {
  this->goodsPrice = goodsPrice;
  appParams.insert("goods_price", goodsPrice);
}

QString CaipiaoGoodsInfoInputRequest::getGoodsTitle() const {
  return goodsTitle;
}
void CaipiaoGoodsInfoInputRequest::setGoodsTitle (QString goodsTitle) {
  this->goodsTitle = goodsTitle;
  appParams.insert("goods_title", goodsTitle);
}

qlonglong CaipiaoGoodsInfoInputRequest::getGoodsType() const {
  return goodsType;
}
void CaipiaoGoodsInfoInputRequest::setGoodsType (qlonglong goodsType) {
  this->goodsType = goodsType;
  appParams.insert("goods_type", QString::number(goodsType));
}

qlonglong CaipiaoGoodsInfoInputRequest::getLotteryTypeId() const {
  return lotteryTypeId;
}
void CaipiaoGoodsInfoInputRequest::setLotteryTypeId (qlonglong lotteryTypeId) {
  this->lotteryTypeId = lotteryTypeId;
  appParams.insert("lottery_type_id", QString::number(lotteryTypeId));
}

qlonglong CaipiaoGoodsInfoInputRequest::getPresentType() const {
  return presentType;
}
void CaipiaoGoodsInfoInputRequest::setPresentType (qlonglong presentType) {
  this->presentType = presentType;
  appParams.insert("present_type", QString::number(presentType));
}



CaipiaoGoodsInfoInputResponse *CaipiaoGoodsInfoInputRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  CaipiaoGoodsInfoInputResponse *tmpResponse = new CaipiaoGoodsInfoInputResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
