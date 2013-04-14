#ifndef PRODUCTSPEC_H
#define PRODUCTSPEC_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/CertPicInfo.h>


/**
 * @brief ProductSpec(产品规格)结构。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductSpec : public TaoDomain
{

public:
 virtual ~ProductSpec() { }

  QString getBarcode() const;
  void setBarcode (QString barcode);
  qlonglong getBrandId() const;
  void setBrandId (qlonglong brandId);
  QList<CertPicInfo> getCertifiedPics() const;
  void setCertifiedPics (QList<CertPicInfo> certifiedPics);
  QString getCustomePropsName() const;
  void setCustomePropsName (QString customePropsName);
  QDateTime getMarketTime() const;
  void setMarketTime (QDateTime marketTime);
  QString getPicUrl() const;
  void setPicUrl (QString picUrl);
  QString getProductCode() const;
  void setProductCode (QString productCode);
  qlonglong getProductId() const;
  void setProductId (qlonglong productId);
  qlonglong getSpecId() const;
  void setSpecId (qlonglong specId);
  QString getSpecProps() const;
  void setSpecProps (QString specProps);
  QString getSpecPropsAlias() const;
  void setSpecPropsAlias (QString specPropsAlias);
  qlonglong getStatus() const;
  void setStatus (qlonglong status);
  
  virtual void parseResponse();

private:
/**
 * @brief 产品规格条形码，支持EAN-13格式。
 **/
  QString barcode;

/**
 * @brief 产品品牌id
 **/
  qlonglong brandId;

/**
 * @brief 认证图片列表
 **/
  QList<CertPicInfo> certifiedPics;

/**
 * @brief 用户输入的属性值存放位置，例如可输入的销售属性，当用户获取pid vid后，应该先从spec_props_alias中获取，然后通过类目属性获取，获取不到，可以通过这个字段获取。
 **/
  QString customePropsName;

/**
 * @brief 上市时间
 **/
  QDateTime marketTime;

/**
 * @brief 产品的主图片地址。绝对地址，格式：http://host/image_path。
 **/
  QString picUrl;

/**
 * @brief 产品货号
 **/
  QString productCode;

/**
 * @brief 产品ID。
 **/
  qlonglong productId;

/**
 * @brief 产品规格ID。
 **/
  qlonglong specId;

/**
 * @brief 产品规格的销售属性组合。格式为：pid:vid;pid:vid。其中：pid是销售属性id，vid是销售属性值id。如果该类目品牌下面没有销售属性，可以不用填写。销售属性通过tmall.brandcat.salespro.get接口获取。
 **/
  QString specProps;

/**
 * @brief 销售属性值别名。格式为：pid1:vid1:别名1;pid2:vid2:别名2。其中：pid是销售属性id，vid是销售属性值id。别名长度不可以超过30个字符。目前只有颜色销售属性支持别名。
 **/
  QString specPropsAlias;

/**
 * @brief 1:表示可以使用的数据，也就是审核通过的。 
3：表示等待小儿审核的产品规格，这个数据暂时还不能使用，要等待审核通过后，才能使用。
 **/
  qlonglong status;

};

#endif  /* PRODUCTSPEC_H */
