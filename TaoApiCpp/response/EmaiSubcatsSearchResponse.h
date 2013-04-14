#ifndef EMAISUBCATSSEARCHRESPONSE_H
#define EMAISUBCATSSEARCHRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/TmallTmCat.h>


/**
 * @brief TOP RESPONSE API: 特卖子类目搜索
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class EmaiSubcatsSearchResponse : public TaoResponse
{
public:
 virtual ~EmaiSubcatsSearchResponse() { }

  QList<TmallTmCat> getCatList() const;
  void setCatList (QList<TmallTmCat> catList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回传入类目下子类目信息
 **/
  QList<TmallTmCat> catList;

};

#endif
