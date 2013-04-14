#ifndef ITEMANCHORGETREQUEST_H
#define ITEMANCHORGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemAnchorGetResponse.h>

/**
 * TOP API: 根据类目id和宝贝描述规范化打标类型获取该类目可用的宝贝描述模块中的锚点
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemAnchorGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCatId() const
;  void setCatId (qlonglong catId);

 qlonglong getType() const
;  void setType (qlonglong type);


  virtual ItemAnchorGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 对应类目编号
 **/
  qlonglong catId;

/**
 * @brief 宝贝模板类型是人工打标还是自动打标：人工打标为1，自动打标为0.人工和自动打标为-1.
 **/
  qlonglong type;

};

#endif  /* ITEMANCHORGETREQUEST_H */
