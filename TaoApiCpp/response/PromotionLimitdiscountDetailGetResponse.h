#ifndef PROMOTIONLIMITDISCOUNTDETAILGETRESPONSE_H
#define PROMOTIONLIMITDISCOUNTDETAILGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/LimitDiscountDetail.h>


/**
 * @brief TOP RESPONSE API: 限时打折详情查询。查询出指定限时打折的对应商品记录信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionLimitdiscountDetailGetResponse : public TaoResponse
{
public:
 virtual ~PromotionLimitdiscountDetailGetResponse() { }

  QList<LimitDiscountDetail> getItemDiscountDetailList() const;
  void setItemDiscountDetailList (QList<LimitDiscountDetail> itemDiscountDetailList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 限时打折对应的商品详情列表。
 **/
  QList<LimitDiscountDetail> itemDiscountDetailList;

};

#endif
