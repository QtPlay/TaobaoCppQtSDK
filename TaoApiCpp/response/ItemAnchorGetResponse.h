#ifndef ITEMANCHORGETRESPONSE_H
#define ITEMANCHORGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/IdsModule.h>


/**
 * @brief TOP RESPONSE API: 根据类目id和宝贝描述规范化打标类型获取该类目可用的宝贝描述模块中的锚点
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemAnchorGetResponse : public TaoResponse
{
public:
 virtual ~ItemAnchorGetResponse() { }

  QList<IdsModule> getAnchorModules() const;
  void setAnchorModules (QList<IdsModule> anchorModules);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 宝贝描述规范化可使用打标模块的锚点信息
 **/
  QList<IdsModule> anchorModules;

/**
 * @brief 返回的宝贝描述模板结果数目
 **/
  qlonglong totalResults;

};

#endif
