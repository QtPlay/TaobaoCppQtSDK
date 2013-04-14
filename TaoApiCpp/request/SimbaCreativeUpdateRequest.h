#ifndef SIMBACREATIVEUPDATEREQUEST_H
#define SIMBACREATIVEUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaCreativeUpdateResponse.h>

/**
 * TOP API: 更新一个创意的信息，可以设置创意标题、创意图片
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCreativeUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAdgroupId() const
;  void setAdgroupId (qlonglong adgroupId);

 qlonglong getCreativeId() const
;  void setCreativeId (qlonglong creativeId);

 QString getImgUrl() const
;  void setImgUrl (QString imgUrl);

 QString getNick() const
;  void setNick (QString nick);

 QString getTitle() const
;  void setTitle (QString title);


  virtual SimbaCreativeUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广组Id
 **/
  qlonglong adgroupId;

/**
 * @brief 创意Id
 **/
  qlonglong creativeId;

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

#endif  /* SIMBACREATIVEUPDATEREQUEST_H */
