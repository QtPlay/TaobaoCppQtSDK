#ifndef SHOPUPDATEREQUEST_H
#define SHOPUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ShopUpdateResponse.h>

/**
 * TOP API: 目前只支持标题、公告和描述的更新
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ShopUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getBulletin() const
;  void setBulletin (QString bulletin);

 QString getDesc() const
;  void setDesc (QString desc);

 QString getTitle() const
;  void setTitle (QString title);


  virtual ShopUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 店铺公告。不超过1024个字符
 **/
  QString bulletin;

/**
 * @brief 店铺描述。10～2000个字符以内
 **/
  QString desc;

/**
 * @brief 店铺标题。不超过30个字符；过滤敏感词，如淘咖啡、阿里巴巴等。title, bulletin和desc至少必须传一个
 **/
  QString title;

};

#endif  /* SHOPUPDATEREQUEST_H */
