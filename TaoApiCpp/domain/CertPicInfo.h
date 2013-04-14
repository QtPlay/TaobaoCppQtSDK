#ifndef CERTPICINFO_H
#define CERTPICINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 产品资质认证图片信息，包括认证类型以及图片url
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CertPicInfo : public TaoDomain
{

public:
 virtual ~CertPicInfo() { }

  qlonglong getCertType() const;
  void setCertType (qlonglong certType);
  QString getPicUrl() const;
  void setPicUrl (QString picUrl);
  
  virtual void parseResponse();

private:
/**
 * @brief 认证图片类型的数值id
 **/
  qlonglong certType;

/**
 * @brief 认证图片的url地址
 **/
  QString picUrl;

};

#endif  /* CERTPICINFO_H */
