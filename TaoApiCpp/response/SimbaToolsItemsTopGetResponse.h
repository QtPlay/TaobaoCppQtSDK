#ifndef SIMBATOOLSITEMSTOPGETRESPONSE_H
#define SIMBATOOLSITEMSTOPGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/RankedItem.h>


/**
 * @brief TOP RESPONSE API: 取得一个关键词的推广组排名列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaToolsItemsTopGetResponse : public TaoResponse
{
public:
 virtual ~SimbaToolsItemsTopGetResponse() { }

  QList<RankedItem> getRankeditems() const;
  void setRankeditems (QList<RankedItem> rankeditems);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广组信息列表
 **/
  QList<RankedItem> rankeditems;

};

#endif
