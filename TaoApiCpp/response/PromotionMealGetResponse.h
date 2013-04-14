#ifndef PROMOTIONMEALGETRESPONSE_H
#define PROMOTIONMEALGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Meal.h>


/**
 * @brief TOP RESPONSE API: 搭配套餐查询。每个卖家最多创建50个搭配套餐，所以查询不会分页，会将所有的满足状态的搭配套餐全部查出。该接口不会校验商品的下架或库存为0，查询结果的状态表明搭配套餐在数据库中的状态，商品的状态请isv自己验证。在卖家后台页面点击查看会触发数据库状态的修改。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionMealGetResponse : public TaoResponse
{
public:
 virtual ~PromotionMealGetResponse() { }

  QList<Meal> getMealList() const;
  void setMealList (QList<Meal> mealList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 搭配套餐列表。
 **/
  QList<Meal> mealList;

};

#endif
