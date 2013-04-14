#ifndef CATBRANDSALEPROP_H
#define CATBRANDSALEPROP_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 被管控的品牌和类目的所对应的销售属性
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CatBrandSaleProp : public TaoDomain
{

public:
 virtual ~CatBrandSaleProp() { }

  qlonglong getBrandId() const;
  void setBrandId (qlonglong brandId);
  qlonglong getCatId() const;
  void setCatId (qlonglong catId);
  qlonglong getDefMarketPropValue() const;
  void setDefMarketPropValue (qlonglong defMarketPropValue);
  bool getIsNotSpec() const;
  void setIsNotSpec (bool isNotSpec);
  qlonglong getPropertyId() const;
  void setPropertyId (qlonglong propertyId);
  
  virtual void parseResponse();

private:
/**
 * @brief 被管控的品牌的Id
 **/
  qlonglong brandId;

/**
 * @brief 被管控的类目ID
 **/
  qlonglong catId;

/**
 * @brief 如果该属性为营销属性，则获取默认值
 **/
  qlonglong defMarketPropValue;

/**
 * @brief true表示：不是产品的规格属性 
false表示：是产品的规格属性。
 **/
  bool isNotSpec;

/**
 * @brief 被管控的销售属性ID
 **/
  qlonglong propertyId;

};

#endif  /* CATBRANDSALEPROP_H */
