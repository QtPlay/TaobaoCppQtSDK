#ifndef VASSUBSCSEARCHRESPONSE_H
#define VASSUBSCSEARCHRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/ArticleSub.h>


/**
 * @brief TOP RESPONSE API: 用于ISV查询自己名下的应用及收费项目的订购记录
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class VasSubscSearchResponse : public TaoResponse
{
public:
 virtual ~VasSubscSearchResponse() { }

  QList<ArticleSub> getArticleSubs() const;
  void setArticleSubs (QList<ArticleSub> articleSubs);  qlonglong getTotalItem() const;
  void setTotalItem (qlonglong totalItem);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 订购关系对象
 **/
  QList<ArticleSub> articleSubs;

/**
 * @brief 总记录数
 **/
  qlonglong totalItem;

};

#endif
