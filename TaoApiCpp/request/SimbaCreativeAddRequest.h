#ifndef SIMBACREATIVEADDREQUEST_H
#define SIMBACREATIVEADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaCreativeAddResponse.h>

/**
 * TOP API: 创建一个创意
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCreativeAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAdgroupId() const
;  void setAdgroupId (qlonglong adgroupId);

 QString getImgUrl() const
;  void setImgUrl (QString imgUrl);

 QString getNick() const
;  void setNick (QString nick);

 QString getTitle() const
;  void setTitle (QString title);


  virtual SimbaCreativeAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广组Id
 **/
  qlonglong adgroupId;

/**
 * @brief 创意图片地址，必须是推广组对应商品的图片之一
 **/
  QString imgUrl;

/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 创意标题，最多20个汉字
 **/
  QString title;

};

#endif  /* SIMBACREATIVEADDREQUEST_H */
