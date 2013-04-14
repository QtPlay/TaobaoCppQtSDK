#ifndef MEAL_H
#define MEAL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 搭配套餐类。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Meal : public TaoDomain
{

public:
 virtual ~Meal() { }

  QString getItemList() const;
  void setItemList (QString itemList);
  qlonglong getMealId() const;
  void setMealId (qlonglong mealId);
  QString getMealMemo() const;
  void setMealMemo (QString mealMemo);
  QString getMealName() const;
  void setMealName (QString mealName);
  QString getMealPrice() const;
  void setMealPrice (QString mealPrice);
  qlonglong getPostageId() const;
  void setPostageId (qlonglong postageId);
  QString getStatus() const;
  void setStatus (QString status);
  
  virtual void parseResponse();

private:
/**
 * @brief 搭配套餐商品列表。item_id为商品的id;item_show_name为商品显示名。因最多允许5个商品进行搭配，所以查询最多有5个，以json格式传出。
 **/
  QString itemList;

/**
 * @brief 套餐id。
 **/
  qlonglong mealId;

/**
 * @brief 搭配套餐描述！
 **/
  QString mealMemo;

/**
 * @brief 搭配套餐名称。
 **/
  QString mealName;

/**
 * @brief 套餐一口价(单位是：分)
 **/
  QString mealPrice;

/**
 * @brief 普通运费模板id。若这个字段为空或0时，运费是卖家负责;若这个字段不为空，说明运费模板存在，运费是买家负责。
 **/
  qlonglong postageId;

/**
 * @brief 套餐状态。有效：VALID;失效：INVALID(有效套餐为可使用的套餐,无效套餐为套餐中有商品下架或库存为0时)。
 **/
  QString status;

};

#endif  /* MEAL_H */
