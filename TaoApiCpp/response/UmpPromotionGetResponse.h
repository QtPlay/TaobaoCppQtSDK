#ifndef UMPPROMOTIONGETRESPONSE_H
#define UMPPROMOTIONGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/PromotionDisplayTop.h>


/**
 * @brief TOP RESPONSE API: 商品优惠详情查询，可查询商品设置的详细优惠。包括限时折扣，满就送等官方优惠以及第三方优惠。此接口有调用频率限制请酌情使用，建议使用淘客API获取商品折扣价格。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpPromotionGetResponse : public TaoResponse
{
public:
 virtual ~UmpPromotionGetResponse() { }

  PromotionDisplayTop getPromotions() const;
  void setPromotions (PromotionDisplayTop promotions);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 优惠详细信息
 **/
  PromotionDisplayTop promotions;

};

#endif
