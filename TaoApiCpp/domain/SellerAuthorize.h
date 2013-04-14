#ifndef SELLERAUTHORIZE_H
#define SELLERAUTHORIZE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/Brand.h>
#include <TaoApiCpp/domain/ItemCat.h>


/**
 * @brief 授权
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellerAuthorize : public TaoDomain
{

public:
 virtual ~SellerAuthorize() { }

  QList<Brand> getBrands() const;
  void setBrands (QList<Brand> brands);
  QList<ItemCat> getItemCats() const;
  void setItemCats (QList<ItemCat> itemCats);
  QList<ItemCat> getXinpinItemCats() const;
  void setXinpinItemCats (QList<ItemCat> xinpinItemCats);
  
  virtual void parseResponse();

private:
/**
 * @brief 品牌列表
 **/
  QList<Brand> brands;

/**
 * @brief 类目列表
 **/
  QList<ItemCat> itemCats;

/**
 * @brief 被授权的新品类目列表
 **/
  QList<ItemCat> xinpinItemCats;

};

#endif  /* SELLERAUTHORIZE_H */
