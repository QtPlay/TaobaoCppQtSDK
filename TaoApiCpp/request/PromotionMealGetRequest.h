#ifndef PROMOTIONMEALGETREQUEST_H
#define PROMOTIONMEALGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PromotionMealGetResponse.h>

/**
 * TOP API: 搭配套餐查询。每个卖家最多创建50个搭配套餐，所以查询不会分页，会将所有的满足状态的搭配套餐全部查出。该接口不会校验商品的下架或库存为0，查询结果的状态表明搭配套餐在数据库中的状态，商品的状态请isv自己验证。在卖家后台页面点击查看会触发数据库状态的修改。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionMealGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getMealId() const
;  void setMealId (qlonglong mealId);

 QString getStatus() const
;  void setStatus (QString status);


  virtual PromotionMealGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 搭配套餐id
 **/
  qlonglong mealId;

/**
 * @brief 套餐状态。有效：VALID;失效：INVALID(有效套餐为可使用的套餐,无效套餐为套餐中有商品下架或库存为0时)。默认时两种情况都会查询。
 **/
  QString status;

};

#endif  /* PROMOTIONMEALGETREQUEST_H */
