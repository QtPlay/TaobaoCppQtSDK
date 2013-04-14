#ifndef RODUCTSPECADDREQUEST_H
#define RODUCTSPECADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/RoductSpecAddResponse.h>

/**
 * TOP API: 增加产品规格
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RoductSpecAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getBarcode() const
;  void setBarcode (QString barcode);

 QString getCertifiedPicStr() const
;  void setCertifiedPicStr (QString certifiedPicStr);

 FileItem getImage() const
;  void setImage (FileItem image);

 QDateTime getMarketTime() const
;  void setMarketTime (QDateTime marketTime);

 QString getProductCode() const
;  void setProductCode (QString productCode);

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);

 QString getSpecProps() const
;  void setSpecProps (QString specProps);

 QString getSpecPropsAlias() const
;  void setSpecPropsAlias (QString specPropsAlias);


  virtual RoductSpecAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 产品二维码
 **/
  QString barcode;

/**
 * @brief 存放产品规格认证类型-认证图片url映射信息，格式为k:v;k:v;，其中key为认证类型数字id，value为调用tmall.product.spec.pic.upload返回的认证图片url文本
 **/
  QString certifiedPicStr;

/**
 * @brief 产品图片
 **/
  FileItem image;

/**
 * @brief 产品上市时间
 **/
  QDateTime marketTime;

/**
 * @brief 产品货号
 **/
  QString productCode;

/**
 * @brief 产品ID
 **/
  qlonglong productId;

/**
 * @brief 产品的规格属性
 **/
  QString specProps;

/**
 * @brief 规格属性别名,只允许传颜色别名
 **/
  QString specPropsAlias;

};

#endif  /* RODUCTSPECADDREQUEST_H */
