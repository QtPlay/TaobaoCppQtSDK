#ifndef SCITEMMAPDELETEREQUEST_H
#define SCITEMMAPDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ScitemMapDeleteResponse.h>

/**
 * TOP API: 根据后端商品Id，失效指定用户的商品与后端商品的映射关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ScitemMapDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getScItemId() const
;  void setScItemId (qlonglong scItemId);

 QString getUserNick() const
;  void setUserNick (QString userNick);


  virtual ScitemMapDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 后台商品ID
 **/
  qlonglong scItemId;

/**
 * @brief 店铺用户nick。 如果该参数为空则删除后端商品与当前调用人的商品映射关系;如果不为空则删除指定用户与后端商品的映射关系
 **/
  QString userNick;

};

#endif  /* SCITEMMAPDELETEREQUEST_H */
