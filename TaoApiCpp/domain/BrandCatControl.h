#ifndef BRANDCATCONTROL_H
#define BRANDCATCONTROL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 管控的品牌类目信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class BrandCatControl : public TaoDomain
{

public:
 virtual ~BrandCatControl() { }

  qlonglong getBrandId() const;
  void setBrandId (qlonglong brandId);
  QString getBrandName() const;
  void setBrandName (QString brandName);
  qlonglong getCatId() const;
  void setCatId (qlonglong catId);
  QString getCatName() const;
  void setCatName (QString catName);
  QString getCertifiedData() const;
  void setCertifiedData (QString certifiedData);
  
  virtual void parseResponse();

private:
/**
 * @brief 被管控的品牌的ID号码
 **/
  qlonglong brandId;

/**
 * @brief 被管控的品牌名称
 **/
  QString brandName;

/**
 * @brief 被管控的类目的ID号
 **/
  qlonglong catId;

/**
 * @brief 被管控的类目的ID号
 **/
  QString catName;

/**
 * @brief 以;隔开多个认证资料。:隔开资料ID与内容。如？1:产品包装图片;2:完整产品资质
 **/
  QString certifiedData;

};

#endif  /* BRANDCATCONTROL_H */
