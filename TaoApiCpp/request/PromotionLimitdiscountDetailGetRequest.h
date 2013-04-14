#ifndef PROMOTIONLIMITDISCOUNTDETAILGETREQUEST_H
#define PROMOTIONLIMITDISCOUNTDETAILGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PromotionLimitdiscountDetailGetResponse.h>

/**
 * TOP API: 限时打折详情查询。查询出指定限时打折的对应商品记录信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionLimitdiscountDetailGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getLimitDiscountId() const
;  void setLimitDiscountId (qlonglong limitDiscountId);


  virtual PromotionLimitdiscountDetailGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 限时打折ID。这个针对查询唯一限时打折情况。
 **/
  qlonglong limitDiscountId;

};

#endif  /* PROMOTIONLIMITDISCOUNTDETAILGETREQUEST_H */
