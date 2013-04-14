#ifndef DESCMODULEINFO_H
#define DESCMODULEINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 该数据结构保存宝贝描述对应的规范化信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class DescModuleInfo : public TaoDomain
{

public:
 virtual ~DescModuleInfo() { }

  QString getAnchorModuleIds() const;
  void setAnchorModuleIds (QString anchorModuleIds);
  qlonglong getType() const;
  void setType (qlonglong type);
  
  virtual void parseResponse();

private:
/**
 * @brief 代表宝贝描述中规范化打标使用到的模块id列表，以逗号分隔。
 **/
  QString anchorModuleIds;

/**
 * @brief 类型代表规范化打标的类型：人工或自动化
 **/
  qlonglong type;

};

#endif  /* DESCMODULEINFO_H */
