#ifndef MARKETINGTAGSGETRESPONSE_H
#define MARKETINGTAGSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/UserTag.h>


/**
 * @brief TOP RESPONSE API: 查询人群标签，返回卖家创建的全部人群标签（有效的）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class MarketingTagsGetResponse : public TaoResponse
{
public:
 virtual ~MarketingTagsGetResponse() { }

  QList<UserTag> getUserTags() const;
  void setUserTags (QList<UserTag> userTags);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 标签列表
 **/
  QList<UserTag> userTags;

};

#endif
