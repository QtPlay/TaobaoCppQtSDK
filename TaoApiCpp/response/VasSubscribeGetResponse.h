#ifndef VASSUBSCRIBEGETRESPONSE_H
#define VASSUBSCRIBEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/ArticleUserSubscribe.h>


/**
 * @brief TOP RESPONSE API: 用于ISV根据登录进来的淘宝会员名查询该为该会员开通哪些收费项目，ISV只能查询自己名下的应用及收费项目的订购情况
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class VasSubscribeGetResponse : public TaoResponse
{
public:
 virtual ~VasSubscribeGetResponse() { }

  QList<ArticleUserSubscribe> getArticleUserSubscribes() const;
  void setArticleUserSubscribes (QList<ArticleUserSubscribe> articleUserSubscribes);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 用户订购信息
 **/
  QList<ArticleUserSubscribe> articleUserSubscribes;

};

#endif
